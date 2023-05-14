#include <iostream>

using namespace std;

int centered(int arr[],int arrLength);

int main(){
    int myArr[]={3, 2, 1, 4, 0};
    int n=sizeof(myArr)/sizeof(int);

    int isCentered=centered(myArr,n);

   if(isCentered == 1){
        cout<<"Array is Centered "<<endl;
   }else{
       cout<<"Array is not Centered "<<endl;
   }

    return 0;
}

int centered(int arr[],int arrLength){
    int middleIndex=arrLength/2;
    int isCentered=1;

    if(arrLength < 3 || arrLength%2 == 0)
      return 0;
    else{
    for(int i=0; i<middleIndex; i++){
        if(arr[i]<=arr[middleIndex] || arr[arrLength-i]<=arr[middleIndex])
          isCentered=0;
    }
    }

   return isCentered;
}