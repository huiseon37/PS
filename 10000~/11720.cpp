#include <iostream>

using namespace std;

int main(){
	
	int n, sum=0;
	string num;
	
	cin>>n;
	cin>>num;
	
	for(int i=0;i<n;i++){
		sum+= (int)num[i]-48;
	}
	
	cout<<sum<<endl;
	return 0;
}
