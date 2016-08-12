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

#include <iostream>
#include "abstraction.hxx"
#include "abstraction_impl.hxx"

int main(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	org::yuiwong::progpatt::AbstractionImpl * impl
		= new org::yuiwong::progpatt::ConcreteAbstractionImplA();
	org::yuiwong::progpatt::Abstraction * abs
		= new org::yuiwong::progpatt::RefinedAbstraction(impl);
	abs->operation();
	delete abs;
	delete impl;
	return 0;
}
