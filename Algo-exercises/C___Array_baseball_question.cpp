#include <iostream>
using namespace std;

int* printScores(int *arr, int size){
	if(size==0){
		return 0;
	}
	else{
		for(int i=0; i<size; i++){
			if(arr[i]%2==0){
				arr[i]=arr[i]+1;
				cout<<"Added one"<<endl;
				}
			else if(arr[i]!=5){
				arr[i]=arr[i]+3;
				cout<<"Added three"<<endl;
				}
			else{
			 arr[i]=arr[i]+5;	
			 cout<<"Added five"<<endl;
			 }
		}

		return arr;
	}
}
int main(){
	int array[]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(array[0]);
	
	int * resultantArr=printScores(array,size);

	
	for(int i=0;i<size;i++){
		cout<<*(resultantArr + i)<<"\t";
	}
}