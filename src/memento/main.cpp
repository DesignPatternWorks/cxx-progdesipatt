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

#include <assert.h>
#include <iostream>
#include <memory>
#include "memento.hpp"

int main(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "\n";
	{
	std::auto_ptr<org::yuiwong::progpatt::Originator> oriMem(
		new org::yuiwong::progpatt::Originator());
	org::yuiwong::progpatt::Originator *const ori = oriMem.get();
	assert(ori);
	ori->setState("old");
	ori->printState();
	org::yuiwong::progpatt::Memento * bakMem = ori->createMemento();
	assert(bakMem);
	ori->setState("new");
	ori->printState();
	ori->restoreToMemento(*bakMem);
	ori->printState();
	delete bakMem;
	}
	return 0;
}
