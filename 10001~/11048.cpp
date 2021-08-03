#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
	
int arr[1001][1001];
int dp[1001][1001];

int main() {
	
	int n,m;

	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	
	memset(dp,0,sizeof(dp));
	
	dp[n][m] = arr[n][m];
	
	for(int i=n;i>=1;i--){
		for(int j=m;j>=1;j--){
			if(i==n&&j==m) continue;
			dp[i][j] = max(dp[i+1][j],max(dp[i][j+1],dp[i+1][j+1]))+arr[i][j];
		}
	}
	
	printf("%d",dp[1][1]);
	
	return 0;
}
