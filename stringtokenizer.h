/* stringtokenizer.h; defines a collection of functions to manipulate string
 * tokens
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

/* string_tokens_to_int(std::string source, char delimiter):
 * template function that returns a vector of your specified integer type
 * converted from a source string as segregated by the delimiter of your
 * choice with the default being spaces
 */
template <typename intT> std::vector<intT>
string_tokens_to_int(std::string source, char delimiter = ' ');

/* string_tokens_to_int(std::vector<std::string> tokens):
 * template function that returns a vector of your specified integer type
 * converted from a source string vector
 *
 * if you believe that there may be values in your string vector that exceed 
 * the size of the type  of your int vector, you may pass the optional
 * skip = true to skip type size checking and process each number as if it were
 * a long long value and then cast it to
 */
template <typename intT> std::vector<intT> 
string_tokens_to_int(std::vector<std::string> tokens);

/* string_tokens_to_uint(std::string source, char delimiter):
 * template function that returns a vector of your specified unsigned integer
 * type converted from a source string as segregated by the delimiter of your
 * choice with the default being a space
 */
template <typename UintT> std::vector<UintT>
string_tokens_to_uint(std::string source, char delimiter = ' ');

/* string_tokens_to_int(std::vector<std::string> tokens):
 * template function that returns a vector of your specified unsigned
 * integer type converted from a source string vector
 */
template <typename UintT> std::vector<UintT>
string_tokens_to_uint(std::vector<std::string> tokens);

/*TODO: define functions for float values */

/* converts an entered string into a vector of string tokens based on
 * the delimiter, with the default being a space.
 */
std::vector<std::string> tokenize(std::string source, char delimiter = ' ');

}

#endif
