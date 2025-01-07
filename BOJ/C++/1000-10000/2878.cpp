//2878
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	
	int n;
	long long m, nrr[100001], csum=0,ans =0;
	
	cin >> m >> n ;
	
	for(int i=0; i<n; i++) {
		cin>>nrr[i];
		csum += nrr[i];
	}
	
	sort(nrr, nrr+n);
	csum -= m;
	
	for(int i=0;i<n;i++){
		long long c = min(nrr[i],csum/(n-i));
		ans += c*c;
		csum -= c;
	}
	
	cout<<ans<<endl;
	
	return 0;
}
