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

#if !defined(ORG_YUIWONG_PROGPATT_FLYWEIGHT_HXX)
#define ORG_YUIWONG_PROGPATT_FLYWEIGHT_HXX (1)

#include <string>

namespace org { namespace yuiwong { namespace progpatt {
class Flyweight {
protected:
	Flyweight(const std::string& intrinsicState);
public:
	virtual ~Flyweight();
	virtual void operation(const std::string& extrinsicState);
	inline std::string intrinsicState(void) const {
		return this->_intrinsicState;
	}
private:
	std::string _intrinsicState;
};/* class Flyweight */

class ConcreteFlyweight: public Flyweight {
public:
	ConcreteFlyweight(const std::string& intrinsicState);
	~ConcreteFlyweight();
	virtual void operation(const std::string& extrinsicState);
};/* class ConcreteFlyweight */
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_FLYWEIGHT_HXX) */
