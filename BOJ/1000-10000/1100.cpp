//1100
#include <iostream>
#include <string>

using namespace std;

int main() {

	string str;
	int cnt = 0;
	int check = 0;

	for (int i = 0; i < 8; i++) {
		cin >> str;
		for (int j = 0; j < 8; j++) {
			if (check == 0) {
				if (j % 2 == 0) {
					if (str[j] == 'F')
						cnt++;
				}
			}
			else {
				if (j % 2 == 1) {
					if (str[j] == 'F')
						cnt++;
				}
			}
		}
		if (check == 0) {
			check = 1;
		}
		else {
			check = 0;
		}
	}
	cout << cnt;

	return 0;
}
