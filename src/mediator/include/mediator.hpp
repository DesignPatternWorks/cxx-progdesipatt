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

#if !defined(ORG_YUIWONG_PROGPATT_MEDIATOR_HPP)
#define ORG_YUIWONG_PROGPATT_MEDIATOR_HPP (1)

#include <string>

namespace org { namespace yuiwong { namespace progpatt {
class Mediator {
protected:
	Mediator(void);
public:
	virtual ~Mediator();
	virtual void doActionFromAtoB(void) = 0;
	virtual void doActionFromBtoA(void) = 0;
};

class Colleage;
class ConcreteMediator: public Mediator {
public:
	ConcreteMediator(void);
	ConcreteMediator(Colleage * colleageA, Colleage * colleageB);
	~ConcreteMediator();
	Colleage * concreteColleageA(void);
	Colleage * concreteColleageB(void);
	void setConcreteColleageA(Colleage * colleage);
	void setConcreteColleageB(Colleage * colleage);
	void setColleages(Colleage * colleageA, Colleage * colleageB);
	virtual void doActionFromAtoB(void);
	virtual void doActionFromBtoA(void);
private:
	Colleage * _colleageA;
	Colleage * _colleageB;
};
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_MEDIATOR_HPP) */
