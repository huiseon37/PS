//9095
#include <stdio.h>
int dp[12];
int main() {

	int n,num,ans;
	int i;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		
		ans = otc(num);
		
		printf("%d\n", ans);
	}

	return 0;
}

int otc(int a) {
    
    dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	if (a <= 3) {
		return dp[a];
	}
	else {
		if (dp[a] > 0) {
			return dp[a];
		}
		else {
			dp[a] = otc(a - 3) + otc(a - 2) + otc(a - 1);
			return dp[a];
		}
	}
}
