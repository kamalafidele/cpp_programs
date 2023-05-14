#include <iostream>
using namespace std;

struct Queue {
    int front, rear, capacity;
    int *queue;
    
    Queue(int size){
    	front = 0;
    	rear = 0;
    	capacity = size;
    	queue = new int;
	}
	
	void enqueue(int data){
		if(rear == capacity){
			cout<<"The queue is Full!"<<endl;
			return ;
		}
		queue[rear] = data;
		rear++;
	}
	
	void display(){
		if(rear == front){
			cout<<"Queue is empty"<<endl;
			return;
		}
		
		for(int i = front; i < rear; i++){
			cout<<queue[i]<<endl;
		}
		cout<<" "<<endl;
	}
	
	void dequeue(){
		if(rear == front){
			cout<<"Queue is empty"<<endl;
			return;
		}
		
		for(int i = 0; i < rear-1; i++) {
			queue[i] = queue[i+1];
		}
		rear--;
	}
};

int main(){
	Queue que(20);

	que.enqueue(12);
	que.enqueue(56);
    que.enqueue(90);
	que.enqueue(87);

	que.dequeue();
	
	que.display();
}
