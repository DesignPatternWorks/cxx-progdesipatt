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

#include "facade.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Subsystem::Subsystem(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

Subsystem::~Subsystem()
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

void Subsystem::operation(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

Subsystem2::Subsystem2(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

Subsystem2::~Subsystem2()
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

void Subsystem2::operation(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
}

Facade::Facade(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
	this->subsystem = new Subsystem();
	this->subsystem2 = new Subsystem2();
}

Facade::~Facade(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
	delete this->subsystem;
	delete this->subsystem2;
}

void Facade::operationWrapper(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
	this->subsystem->operation();
	this->subsystem2->operation();
}
} } }
