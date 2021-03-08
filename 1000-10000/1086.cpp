//1086
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

long long dp[1<<15][101], p, q;
string numstr[16];
int mod[51];
int numint[16];
int N, k, a, len;

int main(){
	
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);
	
	cin >> N;
	
	for(int i=0;i<N;i++){
		cin>>numstr[i];
	}
	
	cin >> k;
	
	for(int i=0;i<N;i++){
		len = numstr[i].size();	
		for(int j=0;j<len;j++){
				numint[i] = numint[i]*10 + (numstr[i][j]-'0');
				numint[i] %= k;
		}
	}

	mod[0] = 1;
	for (int i = 1; i <= 50; i++) {
		mod[i] = mod[i-1]*10;
		mod[i] %= k;
	}
	
	dp[0][0] = 1;
	
	for(int i=0;i<(1<<N);i++){
		for(int j=0;j<k;j++){
			for(int l=0;l<N;l++){
				if((i&(1<<l)) == 0){
					int n = j*mod[numstr[l].size()];
					n %= k;
					n += numint[l];
					n %= k;
					dp[i | (1 << l)][n] += dp[i][j];
				}
			}
		}
	}
	
	p = dp[(1<<N)-1][0];
	q = 1;
	
	for(int i=2;i<=N;i++){
		q *= i;
	}
	
	long long x=p, y=q, tmp;
	
	while(y!=0){	
		tmp = x%y;
		x=y;
		y=tmp;
	}
	
	p /= x;
	q /= x;

	cout<<p<<'/'<<q<<endl;
	return 0;
}
