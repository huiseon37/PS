//1159
#include <iostream>
#include <string>

using namespace std;

int main() {

	int n,count=0;
	string name;
	int arr[26] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> name;
		arr[name[0] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] >= 5) {
			cout << char(i + 97);
			count++;
		}
	}
	
	if (count == 0) {
		cout << "PREDAJA";
	}

	cout << endl;

	return 0;
}
