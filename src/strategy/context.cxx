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

#include "context.hxx"
#include "strategy.hxx"
#include <iostream>

namespace org { namespace yuiwong { namespace progpatt {
Context::Context(Strategy * strategy)
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
	this->_strategy = strategy;
}

Context::~Context()
{
	std::cout << __FILE__ << __LINE__ << __func__ << "()\n";
	delete this->_strategy;
}

void Context::doAction(void)
{
	this->_strategy->algrithm();
}
} } }
