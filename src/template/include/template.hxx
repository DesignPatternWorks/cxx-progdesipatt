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

#if !defined(ORG_YUIWONG_PROGPATT_TEMPLATE_HXX)
#define ORG_YUIWONG_PROGPATT_TEMPLATE_HXX (1)

#include <string>

namespace org { namespace yuiwong { namespace progpatt {
class Template {
protected:
	Template(void);
public:
	virtual ~Template();
	void method(void);
protected:
	virtual void primitiveOperation(void) = 0;
	virtual void primitiveOperation2(void) = 0;
};/* class Template */

class Concrete: public Template {
public:
	Concrete(void);
	~Concrete();
protected:
	virtual void primitiveOperation(void);
	virtual void primitiveOperation2(void);
};/* class Concrete */

class Concrete2: public Template {
public:
	Concrete2(void);
	~Concrete2();
protected:
	virtual void primitiveOperation(void);
	virtual void primitiveOperation2(void);
};/* class Concrete2 */
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_TEMPLATE_HXX) */
