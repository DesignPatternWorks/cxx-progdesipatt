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
#include "subject.hxx"
#include "observer.hxx"

int main(void)
{
	std::cout << __FILE__ << " +" << __LINE__ << ": " << __func__ << "\n";
	{
	std::auto_ptr<org::yuiwong::progpatt::ConcreteSubject> subjectMem(
		new org::yuiwong::progpatt::ConcreteSubject());
	org::yuiwong::progpatt::ConcreteSubject *const subject = subjectMem.get();
	assert(subject);
	std::auto_ptr<org::yuiwong::progpatt::Observer> oaMem(
		new org::yuiwong::progpatt::ConcreteObserverA(subject));
	assert(oaMem.get());
	std::auto_ptr<org::yuiwong::progpatt::Observer> obMem(
		new org::yuiwong::progpatt::ConcreteObserverB(subject));
	assert(obMem.get());
	subject->setState("old");
	subject->notify();
	subject->setState("new");
	subject->notify();
	/* 由 Observer 调用 */
	oaMem.get()->subject()->setState("new 2a");
	subject->notify();
	obMem.get()->subject()->setState("new 2b");
	subject->notify();
	oaMem.get()->subject()->setState("new 3a");
	oaMem.get()->subject()->notify();
	obMem.get()->subject()->setState("new 3b");
	oaMem.get()->subject()->notify();
	}
	return 0;
}
