#include <iostream>

using namespace std;

int main(){
   int *p;
   int a = 3, b = 9;
   int *c = &a;
    *c = b;

    cout<<a<<endl;
   return 0;
}