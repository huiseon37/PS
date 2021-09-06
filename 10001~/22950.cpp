#include <iostream>
#include <string>

using namespace std;

string m;

int main(void){
	
	int n,k;
	int mten = 0;
	
	cin>>n;
	cin>>m;
	cin>>k;
	
	for(int i=0;i<n-k;i++){
		int a = m[i]-48;
		if(a == 1){
			m[i] = '0';
		}
	}
	
	int ans;
	
	for(int i=0;i<n;i++){
		if(m[i]-48 != 0){
			ans = 0;
			break;
		}else{
			ans = 1;
		}
	}
	
	if(ans == 1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;	
}
