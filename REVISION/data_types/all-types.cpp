#include <iostream>

using namespace std;

struct Passenger {
    string name;
    int seatNumber;
};

int globalVar = 10;

int main () {
    auto a = 5;
    auto b = 12;
    char tab = '\t';
    char newLine = '\n';
    char backSlash = '\\';
    char singleQuote = '\'';
    char doubleQuote = '\"';

    const int WEEK_DAYS = 7;

    int num = 5;
    int* prt = &num;

    Passenger passenger;    
    passenger.name = "Kamara fidele";
    passenger.seatNumber = 232;


    // C-Type string
    char name[] = "Kamara";

    // STL/C++ string
    string name2= "";



    int sum = a + b;

    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
    cout << "Back slash: " << backSlash << endl;
    cout << "Single Quote: " << singleQuote << endl;
    cout << "Double quote: " << doubleQuote << endl;

    cout << "The size of int is: " << sizeof(int) << endl;
    cout << "The size of long is: " << sizeof(long) << endl;
    cout << "The size of short is: " << sizeof(short) << endl;
    cout << "The size of float is: " << sizeof(float) << endl;
    cout << "The size of double is: " << sizeof(double) << endl;

    cout << "Value stored at: " << prt << " is: " << *prt << endl;

    cout << "Passenger name: " << passenger.name << " seat No: " << passenger.seatNumber << endl;
    cout << "Accessing Global variable with :: " << ::globalVar << endl;
    cout << "Accessing Global variable Normally: " << globalVar << endl;
    return 0;
}