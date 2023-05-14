#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () {
    ofstream file("ex2.txt");
    
    file<< "Hi there, I'm just testing the write to file \n";

    file.close();
    return 0;
}