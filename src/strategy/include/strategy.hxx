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

#if !defined(ORG_YUIWONG_PROGPATT_STRATEGY_HXX)
#define ORG_YUIWONG_PROGPATT_STRATEGY_HXX (1)

#include <string>

namespace org { namespace yuiwong { namespace progpatt {
class Strategy {
public:
	Strategy(void);
	virtual ~Strategy();
	virtual void algrithm(void) = 0;
};/* class Strategy */

class ConcreteStrategy: public Strategy {
public:
	ConcreteStrategy(void);
	~ConcreteStrategy();
	virtual void algrithm(void);
};/* class ConcreteStrategy */

class ConcreteStrategyB: public Strategy {
public:
	ConcreteStrategyB(void);
	~ConcreteStrategyB();
	virtual void algrithm(void);
};/* class ConcreteStrategyB */
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_STRATEGY_HXX) */
