#include <iostream>
#include <string>

using namespace std;

void swap(int* num1, int*num2);

int main(){
   int x=12, y=34;
   
   swap(&x,&y);

   cout<<"X: "<<x<<" Y:"<<y<<endl;
}

void swap(int* num1, int* num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}