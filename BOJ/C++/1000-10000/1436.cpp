#include <iostream>
#include <string>

using namespace std;

int main(void){
	
	int n;
	
	cin>>n;
	
	int cnt = 1;
	int num = 666;
	
	while(cnt!=n){
		num++;
		string str = to_string(num);
		if((int)str.find("666")>=0){
			cnt++;
		}
	}
	
	cout<<num<<endl;
	return 0;
}
