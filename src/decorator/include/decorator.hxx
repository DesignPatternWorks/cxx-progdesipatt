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

#if !defined(ORG_YUIWONG_PROGPATT_DECORATOR_HXX)
#define ORG_YUIWONG_PROGPATT_DECORATOR_HXX (1)

namespace org { namespace yuiwong { namespace progpatt {
class Component {
protected:
	Component(void);
public:
	virtual ~Component();
	virtual void operation(void);
};/* class Component */

class ConcreteComponent: public Component {
public:
	ConcreteComponent(void);
	~ConcreteComponent();
	void operation(void);
};/* class ConcreteComponent */

class Decorator: public Component {
public:
	Decorator(Component * component);
	~Decorator();
	void operation(void);
protected:
	Component * component;
};/* class Decorator */

class ConcreteDecorator: public Decorator {
public:
	ConcreteDecorator(Component * component);
	~ConcreteDecorator();
	void operation(void);
	void addedBehavior(void);
};/* class ConcreteDecorator */
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_DECORATOR_HXX) */
