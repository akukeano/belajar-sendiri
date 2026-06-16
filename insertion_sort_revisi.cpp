#include <iostream>
using namespace std;

int main(){
	int x[] = {3, 2, 6, 5, 4};
	int j = sizeof(x)/sizeof(*x);
	int temp;
	
	cout << "x: ";
	for(int i=0; i<j; i++){
		cout << x[i] << " ";
	}
	
	for(int a=1; a<j; a++){
		for(int b=a; b>0; b--){
			if(x[b] < x[b-1]){
				temp = x[b];
				x[b] = x[b-1];
				x[b-1] = temp;
			}
			else{
				break;
			}
		}
	}
	
	cout << endl;
	cout << "insertion sort: ";
	for(int y=0; y<j; y++){
		cout << x[y] << " ";
	}
}

