#include <iostream>
#include <cstring>
using namespace std;

int one=0, zero=0;
int dpo[41] = {0,};
int dpz[41] = {0,};

int main(void){
	
	int t;

	cin>>t;
	
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		
		dpz[0] = 1;
		dpz[1] = 0;
		dpo[0] = 0;
		dpo[1] = 1;
		
		for(int j=2;j<=n;j++){
			dpz[j] = dpz[j-1]+dpz[j-2];
			dpo[j] = dpo[j-1]+dpo[j-2];
		}
		
		cout<<dpz[n]<<" "<<dpo[n]<<endl;
	
	}
	
	return 0;
}
