
// thsi is a code on how to make a c++ file with fstream.
#include <iostream> // to use the cout function.
#include <fstream> // to use osstream.


int main() {
std::cout <<"hello file";
std::ofstream file("fstream_store/test3succes.cpp"); // create the locstion and the file.
// below is the text written for the file.
file << "#include <iostream> ";
file<<" int main() { ";
file<< "std::cout << hello test2; }";
file.close(); // ends writing the file.
return 0;

}