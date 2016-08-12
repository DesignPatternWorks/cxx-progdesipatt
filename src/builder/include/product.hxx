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

#if !defined(ORG_YUIWONG_PROGPATT_PRODUCT_HXX)
#define ORG_YUIWONG_PROGPATT_PRODUCT_HXX (1)

namespace org { namespace yuiwong { namespace progpatt {
class Product {
public:
	Product(void);
	~Product();
	void producePart(void);
};/* class Product */

class ProductPart {
public:
	ProductPart(void);
	~ProductPart();
	ProductPart * buildPart(void);
};/* class ProductPart */
} } } /* namespace org::yuiwong::progpatt */
#endif /* !defined(ORG_YUIWONG_PROGPATT_PRODUCT_HXX) */
