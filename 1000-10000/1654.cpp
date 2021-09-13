#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int k, n;
long long ans = 0;
vector<long long> arr;

int bin(int mid){
	int sum = 0;
	for(int i=0;i<k;i++){
		sum += arr[i]/mid;
	}
	if(sum>=n){
		return 1;
	}
	else{
		return 0;
	}
}

int main(void) {
	
	cin>>k>>n;
	
	long long s=0, e=2147483647;
	
	for(int i=0;i<k;i++){
		long long a;
		scanf("%lld",&a);
		arr.push_back(a);
		e = max(e, a);
	}
	
	while(s<=e){
		long long mid = (s+e)/2;
		if(bin(mid)){
			ans = max(ans,mid);
			s = mid+1;
		}
		else{
			e = mid-1;
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}
