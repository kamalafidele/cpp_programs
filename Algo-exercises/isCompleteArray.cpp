#include <iostream>
using namespace std;

bool isCompleteArray(int arr[], int arrSize){
   int minEven=INT_MAX, maxEven=INT_MIN;
  
   for(int i=0; i<arrSize; i++){
       if(arr[i]<minEven && arr[i]%2==0)
         minEven=arr[i];

       if(arr[i]>maxEven && arr[i]%2==0)
         maxEven=arr[i];  
   }
    
   if((minEven == maxEven || (minEven%2 !=0 || maxEven %2!=0)))
     return false;
   
    
        for(int j=minEven+1; j<maxEven; j++){
          int isInArray=false;
           for(int i=0; i<arrSize; i++){
               if(j == i){
                 isInArray=true;
                 break;
               }
           }

        if(!isInArray)
          return false;

        }
       
      return true;     
};


int main(){
     int arr[]={5, 7, 9, 13};
     int arrSize=sizeof(arr)/sizeof(int);

     bool isComplete=isCompleteArray(arr,arrSize);

     if(isComplete)
       cout<<"Our array is complete"<<endl;
     else
       cout<<"Our array is not complete"<<endl;
          
    return 0;
}