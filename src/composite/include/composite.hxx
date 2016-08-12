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

#if !defined(ORG_YUIWONG_PROGPATT_COMPOSIZTE_COMPOSITE_HXX)
#define ORG_YUIWONG_PROGPATT_COMPOSIZTE_COMPOSITE_HXX (1)

#include <vector>
#include "component.hxx"

namespace org { namespace yuiwong { namespace progpatt {
class Composite: public Component {
public:
	Composite(void);
	~Composite();
	virtual void operation(void);
	virtual void add(Component * component);
	virtual void remove(Component * component);
	virtual Component * getChild(int index);
private:
	std::vector<Component *> components;
};/* class Composite */
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_COMPOSIZTE_COMPOSITE_HXX) */
