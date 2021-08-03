#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
	
int arr[1001];
int dp[1001];

int main() {

	int n;
	
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	
	fill(dp,dp+1001,1);
	
	for(int i=2;i<=n;i++){
		for(int j=1;j<i;j++){
			if(arr[j]<arr[i]){
				dp[i] = max(dp[i],dp[j]+1);
			}
		}
	}
	
	int ans = -1;
	
	for(int i=1;i<=n;i++){
		ans = max(dp[i],ans);
	}
	/*
	for(int i=1;i<=n;i++){
		cout<<dp[i]<<endl;
	}
	*/
	printf("%d",ans);
	
	return 0;
}
