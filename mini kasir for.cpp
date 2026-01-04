#include<iostream>
using namespace std;

int main(){
	int jumlah;
	int harga;
	int total = 0;
	float diskon = 0;
	float totalAkhir = 0;
	
	cout << "masukan jumlah barang: ";
	cin >> jumlah;
	
	for(int i=1; i<=jumlah; i++){
		cout << "masukan harga barang ke-" << i << ": ";
		cin >> harga;
		total+=harga;
	}
	
	if(harga>100000){
		diskon = total*0.10;
	}
	
	totalAkhir = total - diskon;
	
	cout << "total harga: " << total << endl;
	cout << "diskon: " << diskon << endl;
	cout << "total akhir: " << totalAkhir << endl;
}

