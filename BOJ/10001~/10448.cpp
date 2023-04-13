//10448
#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	for (int a = 0; a < n; a++) {

		int num,sum;
		int ans=0;

		cin >> num;

		for (int i = 1; i < 50; i++) {
			for (int j = 1; j < 50; j++) {
				for (int k = 1; k < 50; k++) {
					sum = i*(i + 1) / 2 + j*(j + 1) / 2 + k*(k + 1) / 2;
					if (sum == num) {
						ans = 1;
						break;
					}
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}
