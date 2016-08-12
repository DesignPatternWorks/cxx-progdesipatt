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

#include "director.hxx"
#include <iostream>
#include "builder.hxx"

namespace org { namespace yuiwong { namespace progpatt {
Director::Director(Builder * builder): _builder(builder)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

Director::~Director()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

void Director::construct(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	this->_builder->buildPartA("User-defined");
	this->_builder->buildPartB("User-defined");
	this->_builder->buildPartC("User-defined");
}
} } } /* namespace org::yuiwong::progpatt */
