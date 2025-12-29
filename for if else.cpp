#include <iostream>
using namespace std;

int main()
{
	for(int i=1; i<=30; i++){
		
		if(i%3 == 0){
			cout << i << " " << "kelipatan 3" << endl;
		}
		else{
			cout << i << " " << "bukan kelipatan 3" << endl;
		}
	}
}
