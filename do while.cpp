#include <iostream>
using namespace std;

int main()
{
	int angka;
	
	do{
		cout << "masukan angka: ";
		cin >> angka;
	}while(angka !=0);
	
	cout << "program selesai!" << angka;
}
