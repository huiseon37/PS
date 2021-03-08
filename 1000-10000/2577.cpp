//2577
#include <iostream>

using namespace std;

int main() {

	int a, b, c;
	int num;
	int arr[10] = { 0 };

	cin >> a >> b >> c;

	num = a*b*c;

	for (int i = 0; num > 0; i++) {
		int j = num % 10;
		arr[j]++;
		num /= 10;
	}

	cout << arr[0] << endl;

	for (int i = 1; i < 10; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}
