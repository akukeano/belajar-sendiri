#include <iostream>
using namespace std;

class Stack{
	private:
		int data[5];
		int top;
	public:
		Stack(){
			top = -1;
		}
		
		bool isEmpty(){
			return top == -1;
		}
		
		bool isFull(){
			return top == 4;
		}
		
		void push(int nilai){
			if(!isFull()){
				top++;
				data[top]=nilai;
			}
			else{
				cout << "Stack penuh!" << endl;
			}
		}
		
		void pop(){
			if(!isEmpty()){
				top--;
			}
			else{
				cout << "Stack kosong!" << endl;
			}
		}
		
		void tampilkan(){
			if(isEmpty()){
				cout << "Stack kosong" << endl;
			}
			if(isFull()){
				cout << "Stack penuh" << endl;
			}
			for(int i=0; i<=top; i++){
				cout << data[i] << " ";
			}
			cout << endl;
		}
};

int main(){
	Stack s;
	
	s.push(10);
	s.push(20);
	s.push(30);
	
	s.pop();
	
	s.tampilkan();
	
	s.pop();
	
	s.tampilkan();
	
	s.pop();
	s.pop();
	
	s.tampilkan();
}
