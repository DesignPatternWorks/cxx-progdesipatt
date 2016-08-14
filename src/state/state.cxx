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

#include "state.hxx"
#include "context.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
State::State(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
}

State::~State(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

void State::operation(Context * context)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "(): "
		<<  "context: " << reinterpret_cast<unsigned long>(context)
		<< "\n";
}

bool State::changeState(Context * context, State * state)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "(): "
		<<  "context: " << reinterpret_cast<unsigned long>(context)
		<<  ". state: " << reinterpret_cast<unsigned long>(state)
		<< "\n";
	context->changeState(state);
	return true;
}

void State::operationChangeState(Context * context)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "(): "
		<<  "context: " << reinterpret_cast<unsigned long>(context)
		<< "\n";
}

ConcreteStateA::ConcreteStateA(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
}

ConcreteStateA::~ConcreteStateA(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

void ConcreteStateA::operation(Context * context)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "(): "
		<< "of ConcreteStateA. "
		<<  "context: " << reinterpret_cast<unsigned long>(context)
		<< "\n";
}

void ConcreteStateA::operationChangeState(Context * context)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "(): "
		<< "of ConcreteStateA. "
		<<  "context: " << reinterpret_cast<unsigned long>(context)
		<< "\n";
	this->operation(context);
	this->State::changeState(context, new ConcreteStateB());
}

ConcreteStateB::ConcreteStateB(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": !!" << __func__ << "()\n";
}

ConcreteStateB::~ConcreteStateB(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "()\n";
}

void ConcreteStateB::operation(Context * context)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "(): "
		<< "of ConcreteStateB. "
		<<  "context: " << reinterpret_cast<unsigned long>(context)
		<< "\n";
}

void ConcreteStateB::operationChangeState(Context * context)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "(): "
		<< "of ConcreteStateB. "
		<<  "context: " << reinterpret_cast<unsigned long>(context)
		<< "\n";
	this->operation(context);
	this->State::changeState(context, new ConcreteStateA());
}
} } }
