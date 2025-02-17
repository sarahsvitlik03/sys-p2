//
//  params.cpp
//  p2
//
//  Created by Sarah Svitlik on 2/7/25.
//

#include "params.hpp"
#include <getopt.h>
#include <cstring>
#include <vector>
#include <string>


using namespace std;

Params::Params(int argc, char* argv[]) {
    struct option longOpts[] = {
        {"verbose", no_argument, NULL, 'v'},
        {"output", required_argument, NULL, 'o'},
        {"dir", required_argument, NULL, 'd'},
        {"help", no_argument, NULL, 0},
        {"ignore-case", no_argument, NULL, 'i'},
        {NULL, 0, NULL, 0}
    };
    
    int ch;
    for (;;) { //Processes each switch
        ch = getopt_long(argc, argv, "ivd:o:h", longOpts, nullptr);
        if (ch == -1) break;
        switch (ch) {
            case 'i': ignore_case = true; break;
            case 'v': verbose = true; break;
            case 'd': dir = optarg; break;
            //case 'o': output = optarg; break; This isn't working right now.
            case 'h': usage(); exit(0);
            case '?': //Catch invalid switches
            default: usage(); exit(0);
                
        }
        
    }
    
    if (optind < argc) {
        search_words = argv[optind];
    }
}

void Params::usage() {
    cout << "\nUsage: sniff [options] \"search words\" \n";
    cout << "Options: \n";
    cout << "  -i,  --ignore-case                Case-insenstive search.\n";
    cout << "  -v,  --verbose                    Enables verbose output.\n";
    cout << "  -d,  --dir <pathname>             Specify starting directory.\n";
    cout << "  -o,  --output <filename>          Specify output file.\n";
    cout << "  -h,  --help                       Display this usage message.\n";
    
}

/*   
 
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
