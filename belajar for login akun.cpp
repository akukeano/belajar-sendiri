#include <iostream>
using namespace std;

int main()
{
	string email,password;
	string emailbenar = "keanoraeehan@gmail.com";
	string passbenar = "keano290807";
	bool login = false;
	
	for(int i = 1; i <= 3; i++){
		cout << "email:";
		cin >> email;
		cout << "password:";
		cin >> password;
		
		if(email == emailbenar && password == passbenar){
			cout << "login berhasil" << endl;
			login = true;
			break;
		}
		else{
			cout << "gagal login ";
			cout << "sisa percobaan = " << i - 3 << endl;
		}
	} if(!login){
		cout << "akun terkunci!";
	}
}
