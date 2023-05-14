#include <iostream>
using namespace std;

void print( int arr[ ], int arrSize ) {
   for( int i=0; i<arrSize; i++ )
     cout << arr[i] << endl;
}

void merge ( int arr[] , int begin, int mid, int end ) {
     int leftSize = mid - begin + 1;
     int rightSize = end - mid;
     int leftArr[leftSize];
     int rightArr[rightSize];

    for( int i = 0; i < leftSize; i++) {
        leftArr[i] = arr[begin+1];
       for(int j = 0; j < rightSize; j++) {
           rightArr[j] = arr[mid+j+1];
           int leftIndexCount = 0;
           int rightIndexCount;
           int mergedIndexCount = begin;

        while( leftIndexCount < leftSize && rightIndexCount < rightSize ) {
            if( leftArr[leftIndexCount] <= rightArr[rightIndexCount] ) {
               arr[mergedIndexCount] = leftArr[leftIndexCount];
               leftIndexCount++;
            } else {
                arr[mergedIndexCount]=rightArr[rightIndexCount];
                rightIndexCount++;
            }
            mergedIndexCount++;
        }

         while ( leftIndexCount < leftSize ) {
             arr[mergedIndexCount] = leftArr[leftIndexCount];
             leftIndexCount++;
             mergedIndexCount++;
         }
         while ( rightIndexCount < rightSize ) {
              arr[mergedIndexCount] = rightArr[rightIndexCount];
              rightIndexCount++;
              mergedIndexCount++;
         }
       }  
     }
}

void mergeSort ( int arr[], int begin, int end ){
    if ( begin >= end )
      return;

    int mid = ( begin + end )/2;
    cout<<" LEFT SPLIT " << end;
    mergeSort( arr, begin, mid);
    cout<<" RIGHT SPLIT " << endl;
    mergeSort( arr, mid+1, end);
    cout << "MERGING " << endl;
    merge( arr, begin, mid, end );  
}

int main( ) {
    int arr[] = { 12,34,45,3,1,56,7,90,2 };
    int arrSize = sizeof(arr)/sizeof(int);
    
    mergeSort( arr, 0, arrSize);
    return 0;
}
