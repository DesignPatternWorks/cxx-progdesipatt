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

#include "prototype.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Prototype::Prototype(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

Prototype::~Prototype()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

Prototype * Prototype::clone(void) const
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	return NULL;
}

ConcretePrototype::ConcretePrototype(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

ConcretePrototype::ConcretePrototype(const ConcretePrototype&
	concretePrototype)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	std::cout << "Copy" << std::endl;
}

ConcretePrototype::~ConcretePrototype()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

Prototype * ConcretePrototype::clone(void) const
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	return new ConcretePrototype(*this);
}
} } } /* namespace org::yuiwong::progpatt */
