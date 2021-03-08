//16360
#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int n;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		int len = str.length();

		if (str[len - 1] == 'l' || str[len - 1] == 'r' || str[len - 1] == 'v') {
			str += "es";
		}
		else if (str[len - 1] == 'a' || str[len - 1] == 'o' || str[len - 1] == 'u') {
			str += "s";
		}
		else if (str[len - 1] == 'y' || str[len - 1] == 'i'){
			str[len - 1] = 'i';
			str += "os";
		}
		else if (str[len - 1] == 't' || str[len - 1] == 'w') {
			str += "as";
		}
		else if (str[len - 1] == 'n') {
			str[len - 1] = 'a';
			str += "nes";
		}
		else if (str[len - 1] == 'e' && str[len - 2] == 'n'){
			str[len - 2] = 'a';
			str[len - 1] = 'n';
			str+="es";
		}
		else {
			str += "us";
		}
		cout << str << endl;
	}

	return 0;
}
