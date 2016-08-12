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
#include <memory>
#include "strategy.hxx"
#include "context.hxx"

int main(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	{
	std::auto_ptr<org::yuiwong::progpatt::Context> contextMemory(
		new org::yuiwong::progpatt::Context(
		new org::yuiwong::progpatt::ConcreteStrategy()
	));
	if (contextMemory.get()) {
		contextMemory.get()->doAction();
	}
	}

	{
	std::auto_ptr<org::yuiwong::progpatt::Context> contextMemory(
		new org::yuiwong::progpatt::Context(
		new org::yuiwong::progpatt::ConcreteStrategyB()
	));
	if (contextMemory.get()) {
		contextMemory.get()->doAction();
	}
	}
	return 0;
}
