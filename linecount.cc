#include <iostream>
#include <fstream>
using namespace std;

int main( int argc, char* argv[] )
{
    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 0; arg < argc; ++arg)
            std::cout << "argv[" << arg << "]: " << argv[arg] << '\n' ;

    exit(0); // this means that the program executed correctly
}
