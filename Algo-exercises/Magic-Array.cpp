#include <iostream>
using namespace std;

bool isPrime(int num){
 if(num <=1)
  return false;

 for(int i=2; i<num; i++){
     if(num%i==0)
       return false;
 }

 return true;
};

bool isMagicArray(int arr[], int arrSize){
    int primesNum=0;
    
   for(int i=0;i<arrSize; i++ ){
       if(isPrime(arr[i]))
         primesNum+=arr[i];
   }

  if( primesNum == arr[0] || (primesNum==0 && arr[0]==0 ) ) return true;
  else return false;
  
};

int main(){
    int arr[]={8, 5, -5, 5, 3};
    int arrSize=sizeof(arr)/sizeof(int);
    int isMagic=isMagicArray(arr,arrSize);

    if(isMagic)
      cout<<"Our array is magic "<<endl;
    else
      cout<<"Our array is not magic "<<endl;  

    return 0;
}