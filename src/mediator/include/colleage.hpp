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

#if !defined(ORG_YUIWONG_PROGPATT_COLLEAGE_HPP)
#define ORG_YUIWONG_PROGPATT_COLLEAGE_HPP (1)

#include <string>

namespace org { namespace yuiwong { namespace progpatt {
class Mediator;
typedef std::string State;
class Colleage {
protected:
	Colleage(void);
	Colleage(Mediator * mediator);
public:
	virtual ~Colleage();
	virtual void action(void) = 0;
	virtual State state(void) const = 0;
	virtual void setState(const State& state) = 0;
protected:
	Mediator * _mediator;
};

class ConcreteColleageA: public Colleage {
public:
	ConcreteColleageA(void);
	ConcreteColleageA(Mediator * mediator);
	~ConcreteColleageA();
	virtual void action(void);
	virtual State state(void) const;
	virtual void setState(const State& state);
private:
	State _state;
};

class ConcreteColleageB: public Colleage {
public:
	ConcreteColleageB(void);
	ConcreteColleageB(Mediator * mediator);
	~ConcreteColleageB();
	virtual void action(void);
	virtual State state(void) const;
	virtual void setState(const State& state);
private:
	State _state;
};
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_COLLEAGE_HPP) */
