#include <iostream>

using namespace std;

int main () {
    int* p1;
    int a = 45, b = 23;
    p1 = &a;
    *p1 = b;

    cout << a << endl;
    a = 12;

    cout << *p1 << endl;

    int arr[] = { 15, 34, 56 };
    int *p2;
    p2 = arr;

    cout << *(p2) << endl;
    cout << *(p2 + 1) << endl;
    cout << *(p2 + 2) << endl;
    return 0;
}