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

/* NOTE: implementation is only designed for machines where the compiler
 * defines an integer as 32-bits.
 */
template <typename intT> std::vector<intT>
string_tokens_to_int(std::string source, char delimiter) {
    
    std::vector<std::string> tokens = tokenize(source, delimiter);

    
}

std::vector<std::string> tokenize(std::string source, char delimiter) {
    
    std::vector<std::string> stringtokens(0); //start  as empty
    //TODO: implement tokenizer loop
    std::string currtoken = "";
    for(const auto& i: source) {
        if(i == delimiter) {
            stringtokens.push_back(currtoken);
            currtoken = "";
        }
        else currtoken+= i;
    }
    return stringtokens;
}
}
