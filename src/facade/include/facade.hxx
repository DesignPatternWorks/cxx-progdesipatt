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

#if !defined(ORG_YUIWONG_PROGPATT_FACADE_HXX)
#define ORG_YUIWONG_PROGPATT_FACADE_HXX (1)

#include <string>

namespace org { namespace yuiwong { namespace progpatt {
class Subsystem {
protected:
public:
	Subsystem(void);
	~Subsystem();
	void operation(void);
};/* class Subsystem */

class Subsystem2 {
protected:
public:
	Subsystem2(void);
	~Subsystem2();
	void operation(void);
};/* class Subsystem2 */

class Facade {
public:
	Facade(void);
	~Facade();
	void operationWrapper(void);
private:
	Subsystem * subsystem;
	Subsystem2 * subsystem2;
};/* class Facade */
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_FACADE_HXX) */
