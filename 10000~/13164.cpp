#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	int n, k;
	vector<int> narr;
	vector<int> diff;
	
	cin >> n >> k;
		
	int a;
	
	for(int i=0;i<n;i++){
		
		cin>>a;
		narr.push_back(a);
	}
	
	for(int i=0; i<n-1; i++){
		
		int cm = narr[i+1]-narr[i];
		
		diff.push_back(cm);
	}
	
	sort(diff.begin(), diff.end());
	
	int min = 0;
	
	for(int i=0;i<n-k;i++){
		
		min += diff[i];
	}
	
	cout<< min<<endl;
	
	return 0;
}
