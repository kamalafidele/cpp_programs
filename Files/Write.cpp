#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
  
  ofstream myFile("Example.txt");
  myFile<<"This is the first time for me to use files in C++";
  myFile.close();
  
    return 0;
}