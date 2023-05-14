#include <iostream>

using namespace std;

int reverseNum(int num);

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    int reverse=reverseNum(number);
    
    cout <<"After Reversing "<<number<<endl;
    cout<<reverse<<endl;

    return 0;
}

int reverseNum(int num){
    int reversed;
    string numReversed="";

    while(num >= 10){
      reversed=num%10;
      num=num/10;
      numReversed+=to_string(reversed);
    }
    numReversed+=to_string(num);

    return stoi(numReversed);
}