#include <iostream>

using namespace std;

int binarySearch(int arr[], int low, int high, int key);
int main(){
    int arr[] = {12,34,45,90,102,120,231,450};
    int arrSize = sizeof(arr)/sizeof(int);

    int result = binarySearch(arr,0,arrSize-1,12);

    if(result == -1)
      cout<<"Element was not found"<<endl;
    else
      cout <<"Element found on index "<<result<<endl;  

    return 0;
}

int binarySearch(int arr[], int low, int high, int key){
    int mid;

    while(low <= high){
        mid = (low+high)/2;

        if(arr[mid] == key)
          return mid;

        if(arr[mid]<key)
           low = mid+1;
        else
           high = mid-1;
  
    }

    return -1;
}