#include <iostream>
#include "PrintArr.h"

using namespace std;
int main(){
    int arr[] = {5,3,0,7,1,2,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key,p;

    for(int i = 1 ; i < n ; i++){
        key = arr[i];
        
        for(p = i-1;p >= 0 && arr[p] > key ; p--){
            arr[p+1] = arr[p];
        }
        
        cout<<"First P: "<<p<<endl;
        arr[p+1] = key;

        printPerLine(arr,n);
        cout<<endl;
    }
    
    cout<<"---------------- SORTED ARRAY ----------"<<endl;
    print(arr,n);

    return 0;
}
