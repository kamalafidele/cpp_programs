#include <iostream>
#include <string>
#include "PrintArr.h"

using namespace std;

void selectionSort(int* arr,int arrLength);

int main(){
    
int arr[]={12,45,6,78,89,0,5,3,1,90,0,13,7,47};
int n=sizeof(arr)/sizeof(arr[0]); 

selectionSort(arr,n);

cout<<"---------------- SORTED ARRAY ----------"<<endl;
print(arr,n);
}

void selectionSort(int* arr,int arrLength){
    
for(int i=0; i<arrLength-1; i++){
 int minimum=i;
 for(int j=i+1; j<arrLength; j++){
     if(arr[j]<arr[minimum])
         minimum=j;
 }

 if(minimum!=i){
     int temp=arr[i]; 
     arr[i]=arr[minimum];
     arr[minimum]=temp;
 }
   printPerLine(arr,arrLength);
   cout<<endl;
}
}

