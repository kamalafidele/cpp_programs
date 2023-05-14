#include<iostream>
using namespace std;
int isMeander(int *arr,int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i]*-1==arr[j]){
				return 0;
			}
		}
		
	}
	return 1;
}
int main(){
	int arr[]={12,1,-22,9,45};
	int size=sizeof(arr)/sizeof(arr[0]);
	int result=isMeander(arr,size);
	cout<<"is it meander: "<<result<<endl;
}