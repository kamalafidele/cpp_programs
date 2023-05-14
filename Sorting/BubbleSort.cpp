#include <iostream>
#include "PrintArr.h"

using namespace std;

void bubbleSort(int arr[], int arrSize);
void myBubbleSort(int arr[], int arrSize);

int main(){
    int arr[]={34,6,8,0,1,5,78,10,18,9,2};

    int arrLength=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,arrLength);
    //myBubbleSort(arr,arrLength);

    cout<<"---------------- SORTED ARRAY ----------"<<endl;
    print(arr,arrLength);
    return 0;
}

void bubbleSort(int arr[], int arrSize){
    for(int i=1; i<arrSize; i++){
        for(int j = 0; j<arrSize-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        printPerLine(arr,arrSize);
        cout<<endl;
    }
}

void myBubbleSort(int arr[], int arrSize){
    for(int i = 0; i<arrSize-1; i++){
        for(int j = i+1; j<arrSize; j++){
            if(arr[j]<arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        printPerLine(arr,arrSize);
        cout<<endl;
    }
}
