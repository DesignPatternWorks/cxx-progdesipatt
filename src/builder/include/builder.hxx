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

#if !defined(ORG_YUIWONG_PROGPATT_BUILDER_HXX)
#define ORG_YUIWONG_PROGPATT_BUILDER_HXX (1)

#include <string>

namespace org { namespace yuiwong { namespace progpatt {
class Product;
class Builder {
protected:
	Builder(void);
public:
	virtual ~Builder();
	virtual void buildPartA(const std::string& buildParam) = 0;
	virtual void buildPartB(const std::string& buildParam) = 0;
	virtual void buildPartC(const std::string& buildParam) = 0;
	virtual Product * getProduct(void) = 0;
};/* class Builder */

class ConcreteBuilder: public Builder {
public:
	ConcreteBuilder(void);
	~ConcreteBuilder();
	virtual void buildPartA(const std::string& buildParam);
	virtual void buildPartB(const std::string& buildParam);
	virtual void buildPartC(const std::string& buildParam);
	virtual Product * getProduct(void);
};/* class ConcreteBuilder */
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_BUILDER_HXX) */
