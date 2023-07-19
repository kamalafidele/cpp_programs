#include <iostream>
#include <string>

using namespace std;

int main () {
    bool isRed = false;
    string message = isRed ? "The car is red" : "The car is not red";
    int y = 10;
    int x = 5;

    int a = x++;
    int b = --y;

    // X = 6 and Y = 9
    cout << "X = " << x << " and Y = " << y << endl;
    // a = 5 and b = 9
    cout << "a = " << a << " and b = " << b << endl;

    a = y++;
    b = ++x;

    // X = 7 and Y = 10
    cout << "X = " << x << " and Y = " << y << endl;
    // a = 9 and b = 7
    cout << "a = " << a << " and b = " << b << endl;

    cout << message <<endl;
    return 0;
}