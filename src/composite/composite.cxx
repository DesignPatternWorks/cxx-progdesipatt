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

#include "composite.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Composite::Composite(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

Composite::~Composite()
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
}

void Composite::operation(void)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	for (std::vector<Component *>::iterator it = this->components.begin();
		it != this->components.end(); ++it) {
		(*it)->operation();
	}
}

void Composite::add(Component * component)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	this->components.push_back(component);
}

void Composite::remove(Component * component)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	for (std::vector<Component *>::iterator it = this->components.begin();
		it != this->components.end(); ++it) {
		if ((*it) == component) {
			it = this->components.erase(it);
			if (this->components.end() == it) {
				break;
			}
		}
	}
}

Component * Composite::getChild(int index)
{
	std::cout << __FILE__ << __LINE__ << __func__ << std::endl;
	return this->components[index];
}
} } } /* namespace org::yuiwong::progpatt */
