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

#include "flyweight.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Flyweight::Flyweight(const std::string& intrinsicState)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
	this->_intrinsicState = intrinsicState;
}

Flyweight::~Flyweight()
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

void Flyweight::operation(const std::string& extrinsicState)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
	std::cout << "extrinsicState: " + extrinsicState + "\n";
}

ConcreteFlyweight::ConcreteFlyweight(const std::string& intrinsicState):
	Flyweight(intrinsicState)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

ConcreteFlyweight::~ConcreteFlyweight()
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

void ConcreteFlyweight::operation(const std::string& extrinsicState)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
	std::cout << "intrinsicState: " + this->Flyweight::intrinsicState()
		+ ". extrinsicState: " + extrinsicState + "\n";
}
} } }
