#include <iostream>

using namespace std;

int* sortArray(int numbers[],int arrLength);

int main(){
    int arr[]={12,45,7,8,566,90,1};
    int arrLength=sizeof(arr)/sizeof(int);
    int *returnedArray=sortArray(arr,arrLength);

    for(int i=0; i<arrLength;i++){
        cout<<*(returnedArray+i)<<endl;
    }
    return 0;
}

int* sortArray(int numbers[],int arrLength){
    
    for(int i=0; i<arrLength; i++){
        for(int j=i+1; j<arrLength; j++){
            if(numbers[j]<numbers[i]){
                int temp=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=temp;
            }
        }
    }

    return numbers;
}
