#include <iostream>
using namespace std;

int* findCommon(int arr1[],int arr1Size, int arr2[],int arr2Size);

int main(){

    int arr1[]={1, 8, 3, 2, 6};
    int arr2[]={2, 6, 1};
    int arr1Size=sizeof(arr1)/sizeof(int);
    int arr2Size=sizeof(arr2)/sizeof(int);

    int* commonElements=findCommon(arr1,arr1Size,arr2,arr2Size);
     
    for(int i=0; i<3; i++)
        cout<<*(commonElements+i)<<endl;
     
    return 0;

}

int* findCommon(int arr1[], int arr1Size,int arr2[],int arr2Size){
    int count=0;
    int* outer;
    int* inner;
    int innerSize=0;
    int outerSize=0; 
    int* storeArr;

    if(arr1Size > arr2Size){
       inner=arr1;
       innerSize=arr1Size;
       outer=arr2;
       outerSize=arr2Size;
    }else{
        inner=arr2;
        innerSize=arr2Size;
        outer=arr1;
        outerSize=arr1Size;
    }
    

     for(int i=0; i<outerSize; i++){
         
         for(int j=0; j<innerSize; j++){
             if(*(outer+i) == *(inner+j)){
                *(storeArr+count)=*(outer+i);
                 count++;
             }      
         }
                   
     }

    return storeArr;
}
