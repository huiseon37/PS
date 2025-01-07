//2293
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	vector<int>money;
	int dp[10001] = {1};

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		money.push_back(a);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j - money[i] >= 0) {
				dp[j] += dp[j - money[i]];
			}
		}
	}
	cout << dp[k] << endl;
	return 0;
}
