#include <iostream>
using namespace std;

class Motor{
	string merek;
	
	public:
		Motor(string n){
			merek = n;
			cout << merek << " di nyalakan" << endl;
		}
		
		void jalan(){
			cout << merek << " sedang jalan" << endl;
		}
		
		void ngerem(){
			cout << merek << " mengerem" << endl;
		}
		
		~Motor(){
			cout << merek << " di matikan" << endl;
		}
		
};

int main(){
	Motor m1("Honda");
	m1.jalan();
	m1.ngerem();
}
