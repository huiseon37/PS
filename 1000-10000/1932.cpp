#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	
	int arr[501][501];
	int dp[501][501];
	int n;
	
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	memset(dp, 0, sizeof(dp));
	
	for(int i=1;i<=n;i++){
		if(i == 1){
			dp[1][1] = arr[1][1];
		}
		else if(i==2){
			dp[2][1] = dp[1][1]+arr[2][1];
			dp[2][2] = dp[1][1]+arr[2][2];
		}
		else{
			for(int j=1;j<=n;j++){
				dp[i][j] = max(dp[i-1][j-1]+arr[i][j], dp[i-1][j]+arr[i][j]);
			}
		}
	}
	
	int ans = -1;
	
	for(int i=1;i<=n;i++){
		ans = max(ans,dp[n][i]);
	}
	
	printf("%d", ans);
	return 0;
}
