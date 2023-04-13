#include <iostream>

using namespace std;

int main(){
	
	int n,k;
	
	cin >> n >> k;
	
	int ans = 1;
	
	for(int i=0;i<k;i++){
		ans *= n;
		n--;	
	}
	for(int i=2;i<=k;i++){
		ans /= i;
	}
	
	cout<<ans<<endl;
	return 0;
}
