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

#include "abstraction.hxx"
#include "abstraction_impl.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Abstraction::Abstraction(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

Abstraction::~Abstraction()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

RefinedAbstraction::RefinedAbstraction(AbstractionImpl * impl): _impl(impl)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

RefinedAbstraction::~RefinedAbstraction()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

void RefinedAbstraction::operation(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	this->_impl->operation();
}
} } } /* namespace org::yuiwong::progpatt */
