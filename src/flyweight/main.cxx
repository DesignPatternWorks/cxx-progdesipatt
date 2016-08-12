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
#include "flyweight_factory.hxx"
#include "flyweight.hxx"

int main(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	org::yuiwong::progpatt::FlyweightFactory * ff
		= new org::yuiwong::progpatt::FlyweightFactory();
	org::yuiwong::progpatt::Flyweight * fw = ff->getFlyweight("aaa");
	fw->operation("111");
	fw = ff->getFlyweight("bbb");
	fw->operation("222");
	fw = ff->getFlyweight("aaa");
	fw->operation("333");
	delete ff;
	return 0;
}
