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

#include "template.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Template::Template(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

Template::~Template()
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

void Template::method(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
	this->primitiveOperation();
	this->primitiveOperation2();
}

Concrete::Concrete(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

Concrete::~Concrete()
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

void Concrete::primitiveOperation(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "(): "
		<< "of class Concrete"
		<< "\n";
}

void Concrete::primitiveOperation2(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "(): "
		<< "of class Concrete"
		<< "\n";
}

Concrete2::Concrete2(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

Concrete2::~Concrete2()
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

void Concrete2::primitiveOperation(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "(): "
		<< "of class Concrete2"
		<< "\n";
}

void Concrete2::primitiveOperation2(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "(): "
		<< "of class Concrete2"
		<< "\n";
}
} } } /* namespace org::yuiwong::progpatt */
