#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () {
    ifstream file("Example.txt");
    string readText;

    while(getline(file, readText)) {
        cout << readText << endl;
    }

    file.close();

    return 0;
}