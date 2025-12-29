#include <iostream>
using namespace std;

int main()
{
	int angka;
	
	cout << "masukan angka: ";
	cin >> angka;
	
	while(angka<0){
		cout << "angka negatif tidak boleh!" << endl;
		cout << "masukan angka: ";
		cin >> angka;
	}
	
	cout << "masukan angka: " << angka << endl;
	cout <<"program selesai";
	
}
