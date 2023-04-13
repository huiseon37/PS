#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	
	int n;
	int arr[1001];
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	sort(arr,arr+n);
	
	int ans=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		ans += sum;
	}
	
	cout<<ans<<endl;
	return 0;
}
