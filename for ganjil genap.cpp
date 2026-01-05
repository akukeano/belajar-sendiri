#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout << "masukan bilangan: ";
	cin >> n;
	
	for(int i=1; i<=n; i++){
		if(i%2==0){
			cout << "bilangan genap" << " " << i << endl;
		}
		else{
			cout << "bilangan ganil" << " " << i << endl;
		}
	}
}
