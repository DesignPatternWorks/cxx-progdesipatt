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

#include "subject.hxx"
#include "observer.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Subject::Subject(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_observers.clear();
}

Subject::~Subject(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

void Subject::attach(Observer * observer)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "(): "
		<<  "observer: " << reinterpret_cast<unsigned long>(observer)
		<< "\n";
	if (NULL != observer) {
		this->_observers.push_front(observer);
	}
}

void Subject::detach(Observer * observer)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "(): "
		<<  "observer: " << reinterpret_cast<unsigned long>(observer)
		<< "\n";
	if (NULL != observer) {
		this->_observers.remove(observer);
	}
}

void Subject::notify(void)
{
	for (std::list<Observer * >::iterator it = this->_observers.begin();
		it != this->_observers.end();
		++it) {
		(*it)->update(this);
	}
}

ConcreteSubject::ConcreteSubject(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_state = "";
}

ConcreteSubject::~ConcreteSubject(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

State ConcreteSubject::state(void) const
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	return this->_state;
}

void ConcreteSubject::setState(const State& state)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	this->_state = state;
}
} } }
