//12015
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int n, a, i;
	vector<int> arr;
	
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>a;
		if(i==0){
			arr.push_back(a);
			continue;
		}
		
		if(arr.back() < a){
			arr.push_back(a);
		}
		else{
			int aidx = lower_bound(arr.begin(),arr.end(),a)-arr.begin();
			arr[aidx] = a;
		}
	}
	cout<<arr.size()<<endl;
	
	return 0;
}
