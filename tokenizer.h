/* Distributed under the MIT license     *
 * Copyright (c) 2019, Rostislav Kuratch *
 * All rights reserved.                  */

#pragma once

inline std::vector<std::string>& split( const std::string& s, char delim, std::vector<std::string>& elems )
{ 
    std::stringstream ss( s ); 
    std::string item; 
    
	while( std::getline( ss, item, delim ) )
	{ 
        elems.push_back( item ); 
    } 

    return elems; 
}

inline std::vector<std::string> tokenize( const std::string &s, char delim )
{ 
    std::vector<std::string> elems; 
    return split( s, delim, elems ); 
}
