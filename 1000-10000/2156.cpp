#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n, a;
	int arr[10001] = {0};	
	int dp[10001] = {0};
	
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	dp[0] = arr[0];
	int cnt = 1;
	
	for(int i=1;i<n;i++){
		if(i<2){
			dp[i] = dp[i-1] + arr[i];
			cnt = 2;
		}
		else{
			if(cnt == 2){
				if(dp[i-2]+arr[i]>dp[i-1]){
					if(dp[i-2]+arr[i]>dp[i-3]+arr[i-1]+arr[i]){
						dp[i] = dp[i-2]+arr[i];
						cnt = 1;
					}
					else{
						dp[i] = dp[i-3]+arr[i-1]+arr[i];
						cnt = 2;
					}
				}
				else{
					if(dp[i-1]>dp[i-3]+arr[i-1]+arr[i]){
						dp[i] = dp[i-1];
						cnt = 0;
					}
					else{
						dp[i] = dp[i-3]+arr[i-1]+arr[i];
						cnt = 2;
					}
				}
			}
			else{
				dp[i] = dp[i-1] + arr[i];
				cnt++;
			}
			
		}
	}
	
	cout<<dp[n-1]<<endl;
	return 0;
}
