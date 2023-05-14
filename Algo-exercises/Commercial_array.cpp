#include<iostream>
using namespace std;

int isCommercial(int arr[], int size){
	for(int i=0; i<size;i++){
		if(arr[i]%2!=0 && arr[i+1]==arr[i] * arr[i]) return 1;
	}
	return 0;
}
int main(){
int arr[]={1,2,4,3,1};
int size=sizeof(arr)/sizeof(arr[1]);
int result=isCommercial(arr,size);
if(result==1){
	cout<<"The array is commercial"<<endl;
}
else{
	cout<<"The array is not commercial"<<endl;
}
}