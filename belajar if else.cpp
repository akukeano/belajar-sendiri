#include <iostream>
using namespace std;

int main()
{
	int umur;
	
	cout << "umur kamu berapa? ";
	cin >> umur;
	
	if(umur <13){
		cout << "masih anak anak";
	}
	else if(umur >=13 <=17){
		cout << "remaja";
	}
	else{
		cout << "dewasa";
	}
}
