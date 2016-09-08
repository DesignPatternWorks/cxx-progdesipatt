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

#include "mediator.hpp"
#include "colleage.hpp"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Mediator::Mediator(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
}

Mediator::~Mediator(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

ConcreteMediator::ConcreteMediator(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_colleageA = NULL;
	this->_colleageB = NULL;
}

ConcreteMediator::ConcreteMediator(Colleage * colleageA, Colleage * colleageB)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_colleageA = colleageA;
	this->_colleageB = colleageB;
}

ConcreteMediator::~ConcreteMediator()
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

Colleage * ConcreteMediator::concreteColleageA(void)
{
	return this->_colleageA;
}

Colleage * ConcreteMediator::concreteColleageB(void)
{
	return this->_colleageB;
}

void ConcreteMediator::setConcreteColleageA(Colleage * colleage)
{
	this->_colleageA = colleage;
}

void ConcreteMediator::setConcreteColleageB(Colleage * colleage)
{
	this->_colleageB = colleage;
}

void ConcreteMediator::setColleages(
	Colleage * colleageA,
	Colleage * colleageB)
{
	this->_colleageA = colleageA;
	this->_colleageB = colleageB;
}

void ConcreteMediator::doActionFromAtoB(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	if (this->_colleageA && this->_colleageB) {
		this->_colleageB->setState(this->_colleageA->state());
	}
}

void ConcreteMediator::doActionFromBtoA(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	if (this->_colleageA && this->_colleageB) {
		this->_colleageA->setState(this->_colleageB->state());
	}
}
} } }
