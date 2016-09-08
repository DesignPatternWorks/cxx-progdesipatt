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

#include "colleage.hpp"
#include "mediator.hpp"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Colleage::Colleage(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_mediator = NULL;
}

Colleage::Colleage(Mediator * mediator)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_mediator = mediator;
}

Colleage::~Colleage(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

ConcreteColleageA::ConcreteColleageA(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_state = "";
}

ConcreteColleageA::ConcreteColleageA(Mediator * mediator)
	:Colleage(mediator)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_state = "";
}

ConcreteColleageA::~ConcreteColleageA()
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

void ConcreteColleageA::action(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	if (this->_mediator) {
		this->_mediator->doActionFromAtoB();
	}
}

State ConcreteColleageA::state(void) const
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	return this->_state;
}

void ConcreteColleageA::setState(const State& state)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	this->_state = state;
}

ConcreteColleageB::ConcreteColleageB(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_state = "";
}

ConcreteColleageB::ConcreteColleageB(Mediator * mediator)
	:Colleage(mediator)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_state = "";
}

ConcreteColleageB::~ConcreteColleageB()
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

void ConcreteColleageB::action(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	if (this->_mediator) {
		this->_mediator->doActionFromBtoA();
	}
}

State ConcreteColleageB::state(void) const
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	return this->_state;
}

void ConcreteColleageB::setState(const State& state)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	this->_state = state;
}
} } }
