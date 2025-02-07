#include <iostream>  // Include input/output stream library [2][27]

using namespace std; // Use standard namespace to avoid std:: prefixes [2][27]

// namespace is a scoping tool to enable usage of classes, functions and other identifiers 
// within a relevant context and avoid identical identifiers in a different namespace / context

int main() {          // Main function - program entry point [2][5][27]
    // Program logic goes here
    cout << "Hello World!\n"; // Output text to console [2][10]
    return 0;         // Indicate successful execution [2][5]
}

// to compile:
// "g++ <filename.cpp> -o <outfilename.out>"

// to run outfile;
// "./<outfilename.out>"