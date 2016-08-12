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

#include "builder.hxx"
#include <iostream>
#include "product.hxx"

namespace org { namespace yuiwong { namespace progpatt {
Builder::Builder(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

Builder::~Builder()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

ConcreteBuilder::ConcreteBuilder(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

ConcreteBuilder::~ConcreteBuilder()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

void ConcreteBuilder::buildPartA(const std::string& buildParam)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	std::cout << buildParam << std::endl;
}

void ConcreteBuilder::buildPartB(const std::string& buildParam)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	std::cout << buildParam << std::endl;
}

void ConcreteBuilder::buildPartC(const std::string& buildParam)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	std::cout << buildParam << std::endl;
}

Product * ConcreteBuilder::getProduct(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	this->buildPartA("Pre-defined");
	this->buildPartB("Pre-defined");
	this->buildPartC("Pre-defined");
	return new Product();
}
} } } /* namespace org::yuiwong::progpatt */
