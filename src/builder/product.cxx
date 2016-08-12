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

#include "product.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Product::Product(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	this->producePart();
	std::cout << "Return a product" << std::endl;
}

Product::~Product()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

void Product::producePart(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	std::cout << "Build part of product" << std::endl;
}

ProductPart::ProductPart(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

ProductPart::~ProductPart()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

ProductPart * ProductPart::buildPart(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	return new ProductPart();
}
} } } /* namespace org::yuiwong::progpatt */
