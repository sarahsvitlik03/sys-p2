//
//  params.cpp
//  p2
//
//  Created by Sarah Svitlik on 2/7/25.
//

#include "params.hpp"
#include <getopt.h>
#include <cstring>


using namespace std;

Params::Params(int argc, char* argv[]) {
    
    struct option longOpts[] = { //Process long switches
        {"verbose", no_argument, NULL, 'b'},
        {"output", required_argument, NULL, 'o'},
        {"dir", required_argument, NULL, 'd'},
        {"help", no_argument, NULL, 0},
        {"ignore-case", no_argument, NULL, 'i'},
        {NULL, 0, NULL, 0}
    };
    
}

/*  Process command line options
 struct option longOpts[] = { //Process long switches
     {"verbose", no_argument, NULL, 'b'},
     {"output", required_argument, NULL, 'o'},
     {"recursive", no_argument, NULL, 'R'},
     {"debug", optional_argument, NULL, 0},
     {NULL, 0, NULL, 0}
 };
 
 cout << "Processing: " << argv[0] << endl;
 int code, ch, optx;
 
 for (;;) { //Loop processes short switches
     ch = getopt_long(argc, argv, "i:auiRlsb:o", longOpts, &code);
     if (ch == -1) break;
     switch (ch) {
         case 'a': //these switches have no arguments.
         case 'u':
         case 'b':
         case 'R': // Something
         case 'o': // something
         case 'i': //something
             break;
         case 0: {
             //some code here
             break;
         }
         case '?': //check  for invalid switches
             break;
     }
 }
 
 
 */
