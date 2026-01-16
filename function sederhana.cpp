#include <iostream>
using namespace std;

int kuadrat(int x){
	return x*x;
}

int main(){
	int x;
	
	cout << "masukan angka:";
	cin >> x;
	
	cout << "hasil pangkat dari angka tersebut adalah: " << kuadrat(x);
}
