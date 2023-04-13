//1562
#include <iostream>
#include <algorithm>

using namespace std;

long long dp[101][10][(1<<10)+1], ans=0;
int N;
int main(){
	
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);
	
	cin >> N;
	
	for(int i=1;i<=9;i++){
		dp[1][i][1<<i] = 1;
	}
	
	for(int i=2;i<=N;i++){
		for(int j=0;j<=9;j++){
			for(int k=1;k<(1<<10);k++){
				if(j == 0){
                    dp[i][0][k | 1 << 0] += dp[i - 1][1][k] % 1000000000;    
                }
                else if(j == 9){
                    dp[i][9][k | 1 << 9] += dp[i - 1][8][k] % 1000000000;
                }else{
                    dp[i][j][k | 1 << j] += dp[i - 1][j - 1][k] % 1000000000;
                    dp[i][j][k | 1 << j] += dp[i - 1][j + 1][k] % 1000000000;
                }
			}
		}
	}
	
	for(int i=0;i<=9;i++){
		ans += dp[N][i][(1<<10)-1];
		ans %= 1000000000;
	}
	
	cout<<ans<<endl;
	
	return 0;
}
