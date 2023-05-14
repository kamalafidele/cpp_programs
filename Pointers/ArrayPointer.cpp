#include <iostream>

using namespace std;


int main(){
    int myArray[]={12,34,56};
    int *pArray;
    pArray=myArray;
    
    cout<<*(pArray+1)<<endl;
    return 0;
}