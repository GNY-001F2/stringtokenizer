/* stringtokenizer.h; header for a collection of functions to manipulate string tokens
 * Copyright (C) 2016  Aayush Agarwal
 *
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
 */

#ifndef STRINGTOKENIZER_H
#define STRINGTOKENIZER_H

#include <string>
#include <vector>

namespace stringtokenizer {

/* template function that returns a vector of integers converted from a source string
 */
template <typename intT> std::vector<intT> string_tokens_to_int(std::string source, std::string delimiter);

/* converts an entered string into a vector of string tokens based on
 */
std::vector<std::string> tokenize(std::string source, char delimiter);

}

#endif
