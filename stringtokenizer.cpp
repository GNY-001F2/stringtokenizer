/* stringtokenizer.cpp; reference implementation for stringtokenizer.h
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

#include "stringtokenizer.h"

namespace stringtokenizer {

/* WARNING: It is your responsibility to ensure that the integers in the
 * strings sent to these functions do not exceed the size of the type of
 * integer vector the function returns as that could lead to undefined
 * behaviour.
 * To ensure transparent string conversion stoll and stoull are used 
 * and then demoted to your preferred type.
 */

/* WARNING: DO NOT ask string_tokesn_to_int() to convert to unsigned values;
 * that is unexpected behaviour and generally not recommended, even if it
 * works with smaller integers. Just use string_tokens_to_uint() instead and
 * save yourself from any potential problems.
 */
template <typename intT> std::vector<intT>
string_tokens_to_int(std::string source, char delimiter) {

    std::vector<std::string> tokens = tokenize(source, delimiter);
    return string_tokens_to_int<intT>(tokens);
}

template <typename intT> std::vector<intT> 
string_tokens_to_int(std::vector<std::string> tokens, bool skip) {

    std::vector<intT> int_tokens(0);
    for(const auto& i: tokens)
        int_tokens.push_back(static_cast<intT>(std::stoll(i)));
    return int_tokens;
}

template <typename UintT> std::vector<UntT>
string_tokens_to_uint(std::string source, char delimiter, bool skip) {

    std::vector<std::string> tokens = tokenize(source, delimiter);
    return string_tokens_to_uint<UintT>(tokens, skip);
}

template <typename UintT> std::vector<UntT> 
string_tokens_to_uint(std::vector<std::string> tokens, bool skip = false) {

    std::vector<UintT> uint_tokens(0);
    for(const auto& i: tokens)
        uint_tokens.push_back(static_cast<UintT>(std::stoull(i)));
    return uint_tokens;
}

/*TODO: implement functions for floating point values */

/* WARNING: tokenize is currently only tested to work with standard strings
 * where each character fits in a byte. Using unicode or any other multi-byte
 * encodings may result in unexpected behaviour.
 */
std::vector<std::string> tokenize(std::string source, char delimiter) {

    std::vector<std::string> stringtokens(0);
    std::string currtoken = "";
    for(const auto& i: source) {
        if(i == delimiter) {
            stringtokens.push_back(currtoken);
            currtoken = "";
        }
        else currtoken += i;
    }
    return stringtokens;
}
}
