//
//  params.hpp
//  p2
//
//  Created by Sarah Svitlik on 2/7/25.
//

#include <iostream>
#include <fstream>

using namespace std;

class Params {
public:
    Params (int argc, char* argv []);
    const char* dir = ".";
    bool verbose = false;
    bool ignore_case = false;
    string search_words;
    ofstream output;
    
    void print();
    void usage();
};
