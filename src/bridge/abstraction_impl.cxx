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

#include "abstraction_impl.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
AbstractionImpl::AbstractionImpl(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

AbstractionImpl::~AbstractionImpl()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

void AbstractionImpl::operation(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	std::cout << __FILE__ << __LINE__ << "..." << std::endl;
}

ConcreteAbstractionImplA::ConcreteAbstractionImplA(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

ConcreteAbstractionImplA::~ConcreteAbstractionImplA()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

void ConcreteAbstractionImplA::operation(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	std::cout << __FILE__ << __LINE__ << "..." << std::endl;
}

ConcreteAbstractionImplB::ConcreteAbstractionImplB(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

ConcreteAbstractionImplB::~ConcreteAbstractionImplB()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

void ConcreteAbstractionImplB::operation(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	std::cout << __FILE__ << __LINE__ << "..." << std::endl;
}
} } } /* namespace org::yuiwong::progpatt */
