#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int arr[1000001]={0};
	int x[1000001]={0};
	int y[1000001]={0};
	int n;

	cin >> n;

	int sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		if (x[i] > y[i]) {
			arr[i] = x[i] - y[i];
		}
		else {
			arr[i] = y[i] - x[i];
		}
	}

	sort(arr, arr + n);

	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			if (x[i] == x[i + 1] && y[i] == y[i + 1]) {
				arr[i] = 0;
			}
		}
		sum += arr[i];
	}
	sum += arr[n - 1];

	cout << sum << endl;

	return 0;
}
