#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int n, m, ans = 0;
vector<int> arr;

int bin(int mid){
	long long sum = 0;
	for(int i=0;i<n;i++){
		if(arr[i]-mid >0){
			sum += arr[i]-mid;
		}
	}
	if(sum>=m){
		return 1;
	}
	else{
		return 0;
	}
}

int main(void) {
	
	cin>>n>>m;
	
	for(int i=0,a;i<n;i++){
		scanf("%d",&a);
		arr.push_back(a);
	}
	
	int s=0, e=1000000000;
	
	while(s<=e){
		int mid = (s+e)/2;
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
