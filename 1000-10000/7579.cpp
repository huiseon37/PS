//7579
#include <iostream>
#include <algorithm>
using namespace std;

int n, m, cost = 0, ans;
int mrr[101];
int crr[101];	
int dp[101][10001] = {0,};
	
int main() {
	
	cin >> n >> m;
	
	for(int i=0; i<n; i++) {
		cin>>mrr[i];
	}
	
	for(int i=0; i<n; i++) {
		cin>>crr[i];
		cost += crr[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<=cost;j++){
			if(i == 0){
				if(crr[i]<=j){
					dp[i][j] = mrr[i];
				}
			}
			else{
				if(crr[i]<=j){
					dp[i][j] = max(dp[i-1][j],dp[i-1][j-crr[i]]+mrr[i]);
				}
				else{
				
				dp[i][j] = dp[i-1][j];
				}
			}
		}
	}
	
	for(int i=0;i<=cost;i++){
		if(dp[n-1][i] >= m){
				cout<<i<<endl;
				break;
		} 
	}
	
	return 0;
}
