#include <iostream>
using namespace std;

void merge(int arr[], int lowerBound, int mid, int upperBound ) {
   int i = lowerBound;
   int j = mid + 1;
   int k = lowerBound;
   int copy[upperBound];

   while( i <= mid && j <= upperBound){
       if(arr[i] <= arr[j]){
           copy[k]= arr[i];
           i++;
       }else{
           copy[k] = arr[j];
           j++;
       }
       k++;
   }

   if( i > mid ) {
       while( j <= upperBound ) {
           copy[k] = arr[j];
           j++;
           k++;
       }
   }
   else {
       while( i <= mid ) {
           copy[k] = arr[i];
           i++;
           k++;
       }
   }

   for( k = lowerBound; k<= upperBound ; k++ ) {
       cout << copy[k] << endl;
       arr[k] = copy[k];
   }
}

void mergeSort(int arr[], int lowerBound, int upperWound ) {
     if( lowerBound < upperWound){
         int mid = ( lowerBound + upperWound ) /2;
         mergeSort(arr,lowerBound,mid);
         mergeSort(arr, mid+1, upperWound);
         merge(arr,lowerBound,mid,upperWound);
     }
}

int main() {
    int arr[] = {3,1,45,12,8,9,32,56,7};
    int upperBound = sizeof(arr)/sizeof(int);
    mergeSort(arr, 0, upperBound);

    cout << " AFTER SORTING " << endl;
    for( int i=0; i< upperBound; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
