#include <iostream>
using namespace std;

class Rekeningbank{
	private:
		string nama;
		long long saldo;
	public:
		Rekeningbank(string n, long long s)
		: nama(n), saldo(s)
		{
			if(s < 0){
				saldo = 0;
			}
			else{
				saldo = s;
			}
		}
		
		void setor(long long uang){
			if(uang > 0){
				saldo = saldo + uang;
			}
		}
		
		void tarik(long long uang){
			if(uang > saldo){
				cout << "saldo tidak mencukupi" << endl;
			}
			if(uang <=saldo){
				saldo = saldo - uang;
			}
		}
		
		string getnama(){
			return nama;
		}
		
		long long getsaldo(){
			return saldo;
		}
};

int main(){
	Rekeningbank bca("Raeehan Keano", 100000);
	bca.setor(50000);
	bca.tarik(50000);
	cout << "nama: " << bca.getnama() << endl;
	cout << "saldo: " << bca.getsaldo() << endl;
}
