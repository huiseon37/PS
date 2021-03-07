#include <iostream>

using namespace std;

int main() {

	int n, arr[51];
	int cntl = 1;
	int cntr = 1;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int left = arr[0];

	for (int i = 0; i < n-1; i++) {
		if (left < arr[i + 1]) {
			cntl++;
			left = arr[i + 1];
		}
		else {
			continue;
		}
	}

	int right = arr[n-1];

	for (int i = n-1; i > 0; i--) {
		if (right < arr[i - 1]) {
			cntr++;
			right = arr[i - 1];
		}
		else {
			continue;
		}
	}

	cout << cntl;
    cout<<'\n';
    cout << cntr;
    cout<<endl;

	return 0;
}
