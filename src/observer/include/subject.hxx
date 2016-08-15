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

#if !defined(ORG_YUIWONG_PROGPATT_SUBJECT_HXX)
#define ORG_YUIWONG_PROGPATT_SUBJECT_HXX (1)

#include <string>
#include <list>

namespace org { namespace yuiwong { namespace progpatt {
typedef std::string State;
class Observer;
class Subject {
protected:
	Subject(void);
public:
	virtual ~Subject();
	virtual void attach(Observer * observer);
	virtual void detach(Observer * observer);
	virtual void notify(void);
	virtual State state(void) const = 0;
	virtual void setState(const State& state) = 0;
private:
	std::list<Observer *> _observers;
};

class ConcreteSubject: public Subject {
public:
	ConcreteSubject(void);
	~ConcreteSubject();
	virtual State state(void) const;
	virtual void setState(const State& state);
private:
	State _state;
};
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_SUBJECT_HXX) */
