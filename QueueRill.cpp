#include <iostream>
using namespace std;

class Queue{
	private:
		int data[5];
		int front;
		int rear;
	public:
		Queue(){
			front = 0;
			rear = -1;
		}
		
		bool isEmpty(){
			return front > rear;
		}
		
		bool isFull(){
			return rear == 4;
		}
		
		void enqueue(int nilai){
			if(!isFull()){
				rear++;
				data[rear]=nilai;
			}
			else{
				cout << "Queue penuh!" << endl;
			}
		}
		
		void dequeue(){
			if(!isEmpty()){
				front++;
			}
			else{
				cout << "Queue kosong!" << endl;
			}
		}
		
		void tampilkan(){
			for(int i = front; i <= rear; i++){
				cout << data[i] << " ";
			}
			cout << endl;
		}
};

int main(){
	Queue q;

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.dequeue();
	q.dequeue();
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);
	q.dequeue();

	q.tampilkan();
}
