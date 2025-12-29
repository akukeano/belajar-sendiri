#include <iostream>
using namespace std;

int main() {
    int angka[5];
    int total = 0;
    float ratarata;

    for(int i = 0; i < 5; i++){
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    for(int i = 0; i < 5; i++){
        total += angka[i];
    }

    ratarata = total / 5.0;

    cout << "Total: " << total << endl;
    cout << "Rata-rata: " << ratarata << endl;

    return 0;
}

