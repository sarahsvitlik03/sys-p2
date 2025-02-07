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
    void print (ofstream& outStream);
    void usage();
    bool verbose = false;
    
};
