#include <iostream>

using namespace std;

int main() {
    
    long long tax;
    
	while (true) {
		
		cin >> tax;
        
		if (tax == 0) break;
		else if (tax <= 1000000) {
			cout << tax << endl;
		}
		else if (1000000 < tax && tax <= 5000000) {
			long long i = tax/10;
			
			tax = tax - i;
			cout << tax << endl;
		}
		else{
			long long i = tax/5;
		
			tax = tax - i;
			cout << tax << endl;
		}
	}


	return 0;
}
