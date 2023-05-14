#include <iostream>

using namespace std;

int findDiffBtnSums(int arr[], int arrLength);

int main(){
   int myArr[]={3, 2, 3, 4};
   int n=sizeof(myArr)/sizeof(int);
   int diffBtnSums=findDiffBtnSums(myArr,n);

   cout<<diffBtnSums<<endl;
    return  0;
}

int findDiffBtnSums(int arr[], int arrLength){
    int x=0, y=0;

    for(int i=0; i<arrLength; i++){
        if(arr[i]%2 == 0)
            y+=arr[i];
        else
           x+=arr[i];
    }

    return x-y;
}