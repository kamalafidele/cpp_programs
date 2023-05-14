#include <iostream>

using namespace std;
int isAllPosibilities(int arr[], int arrSize);

int main(){
   int arr[]={1, 2, 0, 3};
   int arrSize=sizeof(arr)/sizeof(int);
   int result=isAllPosibilities(arr,arrSize);

   cout<<result<<endl;

}

int isAllPosibilities(int arr[], int arrSize){
    int sum=0;
    int sum2=0;
    int newArr[arrSize-1];

    for(int i=0; i<arrSize-1; i++)
       newArr[i]=i;

    for(int j=0; j<arrSize; j++){
       sum2+=arr[j];
       sum+=newArr[j];
    }

    if(sum2 == sum)
      return 1;
    else 
      return 0;     
}
