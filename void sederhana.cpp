#include <iostream>
using namespace std;

void genap(){
	for(int i=0; i<=10; i++){
		if(i%2==0){
			cout << i << " ";
		}
	}
}

int main(){
	genap();
}
