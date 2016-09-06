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

#include "memento.hpp"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Originator::Originator(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_memento = NULL;
	this->_state = "";
}

Originator::Originator(const State& state)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_memento = NULL;
	this->_state = state;
}

Originator::~Originator(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

Memento * Originator::createMemento(void) const
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	return new Memento(this->_state);
}

void Originator::restoreToMemento(const Memento& memento)
{
	this->_state = memento.state();
}

State Originator::state(void) const
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	return this->_state;
}

void Originator::setState(const State& state)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	this->_state = state;
}

void Originator::printState(void) const
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "(): "
		<< "state: " << this->_state << "\n";
}

Memento::Memento(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_state = "";
}

Memento::Memento(const State& state)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_state = state;
}

Memento::~Memento()
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

State Memento::state(void) const
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	return this->_state;
}

void Memento::setState(const State& state)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	this->_state = state;
}
} } }
