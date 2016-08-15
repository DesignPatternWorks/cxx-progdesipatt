/* ========================================================================
 * LICENSE
 *   LGPLv3
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * ======================================================================== */

#include "observer.hxx"
#include "subject.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Observer::Observer(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_state = "";
}

Observer::~Observer(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

ConcreteObserverA::ConcreteObserverA(Subject * subject)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_subject = subject;
	this->_subject->attach(this);
}

ConcreteObserverA::~ConcreteObserverA()
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	this->_subject->detach(this);
}

Subject * ConcreteObserverA::subject(void) const
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()"
		<< " of ConcreteObserverA"
		<< "\n";
	return this->_subject;
}

void ConcreteObserverA::update(Subject * subject)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()"
		<< " of ConcreteObserverA"
		<< "\n";
	this->_state = subject->state();
	this->printInfo();
}

void ConcreteObserverA::printInfo(void) const
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()"
		<< " of ConcreteObserverA: "
		<< "state: " << this->_subject->state()
		<< "\n";
}

ConcreteObserverB::ConcreteObserverB(Subject * subject)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_subject = subject;
	this->_subject->attach(this);
}

ConcreteObserverB::~ConcreteObserverB()
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	this->_subject->detach(this);
}

Subject * ConcreteObserverB::subject(void) const
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()"
		<< " of ConcreteObserverB"
		<< "\n";
	return this->_subject;
}

void ConcreteObserverB::update(Subject * subject)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()"
		<< " of ConcreteObserverB"
		<< "\n";
	this->_state = subject->state();
	this->printInfo();
}

void ConcreteObserverB::printInfo(void) const
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()"
		<< " of ConcreteObserverB: "
		<< "state: " << this->_subject->state()
		<< "\n";
}
} } }
