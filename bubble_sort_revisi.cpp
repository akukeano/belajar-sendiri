#include <iostream>
using namespace std;

int main(){
	int x[] = {5,3,1,4};
	int j = sizeof(x)/sizeof(*x);
	int temp;
	
	cout << "x: ";
	for(int i=0; i<j; i++){
		cout << x[i] << " ";
	}
	
	cout << endl;
	
	for(int i=0; i<j; i++){
		for(int h=0; h<j-1; h++){
			if(x[h] > x[h+1]){
				temp = x[h];
				x[h] = x[h+1];
				x[h+1] = temp;
			}
		}
	}
	
	cout << endl;
	cout << endl;
	cout << "bubble sort: ";
	for(int a=0; a<j; a++){
		cout << x[a] << " ";
	}
}
