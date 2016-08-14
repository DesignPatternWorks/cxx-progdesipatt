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

#include "context.hxx"
#include "state.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Context::Context(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
	this->_state = NULL;
}

Context::Context(State * state)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "():"
		<< "state: " << reinterpret_cast<unsigned long>(state)
		<< "\n";
	this->_state = state;
}

Context::~Context()
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	if (NULL != this->_state) {
		delete this->_state;
	} else {
		std::cout << __FILE__ << " +" << __LINE__ << ": "
			<< __func__ << "(): "
			<< "Nil _state"
			<< "\n";
	}
}

void Context::operation(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	if (NULL != this->_state) {
		this->_state->operation(this);
	} else {
		std::cout << __FILE__ << " +" << __LINE__ << ": "
			<< __func__ << "(): "
			<< "Nil _state"
			<< "\n";
	}
}

bool Context::changeState(State * state)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	if (NULL != this->_state) {
		delete this->_state;
	}
	this->_state = state;
	return true;
}

void Context::operationChangeState(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
	if (NULL != this->_state) {
		this->_state->operationChangeState(this);
	} else {
		std::cout << __FILE__ << " +" << __LINE__ << ": "
			<< __func__ << "(): "
			<< "Nil _state"
			<< "\n";
	}
}
} } }
