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

/* WARNING: tokenize is currently only tested to work with standard strings
 * where each character fits in a byte. Using unicode or any other multi-byte
 * encodings may result in unexpected behaviour.
 */
std::vector<std::string> tokenize(std::string source, char delimiter) {

    //to ensure the last word is correctly parsed
    if(source.back() != delimiter) source += delimiter;
    std::vector<std::string> stringtokens(0);
    std::string currtoken = "";
    for(const auto& i: source) {
        if(i == delimiter) {
            if(currtoken != "") {
                stringtokens.push_back(currtoken);
                currtoken = "";
            }
            else currtoken = "";
        }
        else currtoken += i;
    }
    return stringtokens;
}

// template <long long> std::vector<long long>
// string_tokens_to_int(std::string source, char delimiter);
// template <long long> std::vector<long long>
// string_tokens_to_int(std::vector<std::string> tokens);
}
