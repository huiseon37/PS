//11497
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n;
	int arr[10001];

	cin >> n;

	for (int a = 0; a < n; a++) {
		
		int num;
		cin >> num;
		
		for (int i = 0; i < num; i++) {
			cin >> arr[i];
		}

		sort(arr, arr+num);

		int maxi = 0;

		for (int i = 2; i < num; i++) {
			maxi = max(arr[i] - arr[i - 2], maxi);
		}

		maxi = max(arr[num-1] - arr[num-2], maxi);
		maxi = max(arr[1] - arr[0], maxi);

		cout << maxi << endl;

	}

	return 0;
}
