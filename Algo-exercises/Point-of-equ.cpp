#include <iostream>
using namespace std;
int findPoE(int arr[], int arrSize);

int main(){
    int arr[]={2, 1, 1, 1, 2, 1, 7};
    int arrSize=sizeof(arr)/sizeof(int);

    int idx=findPoE(arr,arrSize);

    if(idx < 0)
    cout<<"Point of Equilbrium not found "<<endl;
    else
     cout<<"Point of equilbrium is "<<idx<<endl;

    return 0;
}

int findPoE(int arr[], int arrSize){
    if(arrSize < 3){
        return -1;
    }

    
    for(int i=1; i<arrSize; i++){
        int idx=i;
        int leftSum=0;
        int rightSum=0;

       for(int j=0; j<idx; j++){
             leftSum+=arr[j];
       }
       for(int k=idx+1; k<arrSize; k++){
           rightSum+=arr[k];
       }

       if(leftSum == rightSum)
         return idx; 
    }

   return  -1;
}