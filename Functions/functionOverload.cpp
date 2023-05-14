#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int add(int num1,int num2){
    return num2+num2;
}
float add(float num1, float num2){
    return num1+num2;
}

int main(){
    float num1=34.56;
    float num2=5.2;

    cout<<"The sum is "<<add(num1,num2)<<endl;
    return 0;
}