//2798
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
	int n, m;
	int num[101], max=0;
	
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				int  sum=0;
				
				sum += num[i];
				sum += num[j];
				sum += num[k];
				
				if(max<=sum && sum<=m){
					max = sum;
				}
			}	
		}
	}
	
	cout<<max<<endl;
	return 0;
}
