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

#if !defined(ORG_YUIWONG_PROGPATT_OBSERVER_HXX)
#define ORG_YUIWONG_PROGPATT_OBSERVER_HXX (1)

#include "subject.hxx"

namespace org { namespace yuiwong { namespace progpatt {
class Observer {
protected:
	Observer(void);
public:
	virtual ~Observer();
	virtual Subject * subject(void) const = 0;
	virtual void update(Subject * subject) = 0;
	virtual void printInfo(void) const = 0;
protected:
	State _state;
};

class ConcreteObserverA: public Observer {
public:
	ConcreteObserverA(Subject * subject);
	~ConcreteObserverA();
	virtual Subject * subject(void) const;
	virtual void update(Subject * subject);
	virtual void printInfo(void) const;
private:
	Subject * _subject;
};

class ConcreteObserverB: public Observer {
public:
	ConcreteObserverB(Subject * subject);
	~ConcreteObserverB();
	virtual Subject * subject(void) const;
	virtual void update(Subject * subject);
	virtual void printInfo(void) const;
private:
	Subject * _subject;
};
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_OBSERVER_HXX) */
