//2163
#include <iostream>

using namespace std;

int main() {

	int n, m;
	int dp[301][301];

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i == 1) {
				dp[i][j] = j - 1;
			}
			else {
				if (j == 1) {
					dp[i][1] = dp[i-1][1]+1;
				}
				else dp[i][j] = dp[i][j - 1] + i;
			}
		}
	}

	cout << dp[n][m] << endl;
	return 0;
}
