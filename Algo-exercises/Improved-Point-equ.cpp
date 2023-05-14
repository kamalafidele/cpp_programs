#include <iostream>

using namespace std;

int findPoE(int arr[], int arrSize);

int main(){
    int arr[]={1, 5, 3, 1, 1, 1, 1, 1, 1};
    int arrSize=sizeof(arr)/sizeof(int);

    int idx=findPoE(arr,arrSize);

    if(idx < 0)
    cout<<"Point of Equilbrium not found "<<endl;
    else
     cout<<"Point of equilbrium is "<<idx<<endl;

    return 0;
}

int findPoE(int arr[], int arrSize){
    int leftIndex=0;
    int rightIndex=arrSize-1;
    int leftSum=arr[0];
    int rightSum=arr[arrSize-1];
    int idx=0;

    for(int n=1; n<arrSize-2; n++){
        if(leftSum < rightSum){
            leftIndex++;
            leftSum+=arr[leftIndex];
            idx=leftIndex+1;
        }
        else {
            rightIndex--;
            rightSum+=arr[rightIndex];
            idx=rightIndex-1;
        }
    }

    if(leftSum == rightSum)
       return idx;
    else
       return -1;   
}