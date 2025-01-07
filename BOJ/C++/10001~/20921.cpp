//20921 - 2021 ICPC Shinchon Winter Algorithm Camp Contest 중급 A번
#include <iostream>

using namespace std;

int n, k;
int num[4243] = {0, };

int main() {
	
	
	cin >> n >> k;
	
	if(k == 0){
		for(int i=1;i<=n;i++){
			num[i] = i;
		}
	}
	else if(k<n){
		num[1] = k+1;
		for(int i=1;i<=k;i++){
			num[i+1] = i;
		}
		for(int i=k+2;i<=n;i++){
			num[i] = i;
		}
	}
	else if(k>=n){
		int nxt = 1;
		num[nxt] = n; // n-1번
		nxt++; 
		int a = k-n+1;
		while(a>0){
		if(a<n-nxt){
			num[nxt] = a+1;
			nxt++;
			for(int i=1;i<=a;i++){
				num[nxt] = i;
				nxt++;
			}
			for(int i=a+2;nxt<=n;i++){
				num[nxt] = i;
				nxt++;
			}
			a =0;
		}
		else{
			num[nxt] = n-nxt+1;
			nxt++;
			a = a-(n-nxt+1);
			if(a==0){
				for(int i=1;nxt<=n;i++){
					num[nxt] = i;
					nxt++;
				}
			}
		}
		}	
	}
	
	for(int i=1;i<=n;i++){
		cout<<num[i]<<" ";
	}
	
	return 0;
} 
