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
#include "mediator.hpp"
#include "colleage.hpp"

int main(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "\n";
	{
	std::auto_ptr<org::yuiwong::progpatt::ConcreteMediator> medMem(
		new org::yuiwong::progpatt::ConcreteMediator());
	org::yuiwong::progpatt::ConcreteMediator *const med = medMem.get();
	assert(med);

	org::yuiwong::progpatt::ConcreteColleageA * ca
		= new org::yuiwong::progpatt::ConcreteColleageA(med);
	org::yuiwong::progpatt::ConcreteColleageB * cb
		= new org::yuiwong::progpatt::ConcreteColleageB(med);
	med->setColleages(ca, cb);
	std::cout << "\n";
	ca->setState("old ca");
	cb->setState("old cb");
	std::cout << "ca state: " << ca->state() << "\n";
	std::cout << "cb state: " << cb->state() << "\n";
	ca->action();
	std::cout << "ca state: " << ca->state() << "\n";
	std::cout << "cb state: " << cb->state() << "\n";
	cb->action();
	std::cout << "ca state: " << ca->state() << "\n";
	std::cout << "cb state: " << cb->state() << "\n";

	std::cout << "\n";
	ca->setState("new ca");
	std::cout << "ca state: " << ca->state() << "\n";
	std::cout << "cb state: " << cb->state() << "\n";
	ca->action();
	std::cout << "ca state: " << ca->state() << "\n";
	std::cout << "cb state: " << cb->state() << "\n";
	cb->action();
	std::cout << "ca state: " << ca->state() << "\n";
	std::cout << "cb state: " << cb->state() << "\n";

	std::cout << "\n";
	cb->setState("old cb2");
	std::cout << "ca state: " << ca->state() << "\n";
	std::cout << "cb state: " << cb->state() << "\n";
	cb->action();
	std::cout << "ca state: " << ca->state() << "\n";
	std::cout << "cb state: " << cb->state() << "\n";
	ca->action();
	std::cout << "ca state: " << ca->state() << "\n";
	std::cout << "cb state: " << cb->state() << "\n";

	delete ca;
	delete cb;
	}
	return 0;
}
