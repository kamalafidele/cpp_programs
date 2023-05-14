#include <iostream>

using namespace std;

int interpolationSearch(int arr[], int low, int high, int key);
int main() {
    int arr[] = {12,34,45,90,102,120,231,231};
    int arrSize = sizeof(arr)/sizeof(int);

    int result = interpolationSearch(arr,0,arrSize-1,231);

    if(result == -1)
      cout<<"Element was not found"<<endl;
    else
      cout <<"Element found on index "<<result<<endl;  

    return 0;
}

int interpolationSearch(int arr[], int low, int high, int key){
    int pos;

    while ( low <= high ) {
        pos = low +( (key-arr[low]) * (high-low) ) / ( arr[high] - arr[low] );

        if(arr[pos] == key)
          return pos;

        if(arr[pos]<key)
           low = pos + 1;
        else
           high = pos - 1;     
    }

    return -1;
}