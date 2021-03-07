#include <iostream>

using namespace std;

int main(){
	
	int n;
	int max = -100, inx=1;
	
	for(int i=1;i<=9;i++){
		int a;
		cin>>a;
		if(a>max){
			max = a;
			inx = i;
		}
	}
	
	cout<<max<<"\n"<<inx<<endl;
	return 0;
}
