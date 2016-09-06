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

#if !defined(ORG_YUIWONG_PROGPATT_MEMENTO_HPP)
#define ORG_YUIWONG_PROGPATT_MEMENTO_HPP (1)

#include <string>

namespace org { namespace yuiwong { namespace progpatt {
class Memento;
typedef std::string State;
class Originator {
public:
	Originator(void);
	Originator(const State& state);
	~Originator();
	Memento * createMemento(void) const;
	void setMemento(Memento * memento);
	void restoreToMemento(const Memento& memento);
	State state(void) const;
	void setState(const State& state);
	void printState(void) const;
private:
	State _state;
	Memento * _memento;
};

class Memento {
protected:
	/*
	 * 这是最关键的地方
	 * 将 Originator 为 friend 类 可以访问内部信息
	 * 但是其他类不能访问
	 */
	friend class Originator;
	Memento(void);
	Memento(const State& state);
public:
	~Memento();
protected:
	State state(void) const;
	void setState(const State& state);
private:
	State _state;
};
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_MEMENTO_HPP) */
