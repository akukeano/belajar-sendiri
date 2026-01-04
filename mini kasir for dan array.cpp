#include <iostream>
using namespace std;

int main(){
    int jumlah;
    int harga[50];
    int total = 0;
    float diskon = 0;
    float totalBarang;

    cout << "Masukan jumlah barang: ";
    cin >> jumlah;

    for(int i = 0; i < jumlah; i++){
        cout << "Masukan harga barang ke-" << i + 1 << ": ";
        cin >> harga[i];
    }

    cout << "\nDaftar harga barang:\n";
    for(int i = 0; i < jumlah; i++){
        cout << "Barang ke-" << i + 1 << ": " << harga[i] << endl;
        total += harga[i];
    }

    if(total > 100000){
        diskon = total * 0.10;
    }

    totalBarang = total - diskon;

    cout << "\nTotal      : " << total << endl;
    cout << "Diskon     : " << diskon << endl;
    cout << "Total akhir: " << totalBarang << endl;

    return 0;
}

