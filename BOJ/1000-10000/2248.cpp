//2248
#include <iostream>
#include <string>
using namespace std;

string ans="";
long long dp[33][33];
void find (int n, int l, long long ii){
	
	if(n==0) return;
	if(l==0){
		for(int i=0; i<n;i++){
			ans += '0';
		}
		return ;
	}
	
	long long piv = 0;
	
	piv = dp[n-1][l];
	
	if(piv >= ii){
		ans += '0';
		find(n-1, l, ii);
	}
	else{
		ans += '1';
		find(n-1,l-1,ii-piv);
	}
	
	return;
}
int main(){
	
	int n, l;
	long long I;
	
	cin >> n >> l >> I;

	for(int i=0;i<=32;i++){
		dp[0][i] = 1;
		dp[i][0] = 1;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=l;j++){
			dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
		}
	}
	
	find(n,l,I);
	
	cout<<ans<<endl;
	return 0;
}

