#include <iostream>

using namespace std;
int main(void){
	
	int n;
	
	cin>>n;
	
	for(int i=n-1;i>=0;i--){
		int a = i;
		int b = n-i;
		while(true){
			
			if(a <=0)	break;
			cout<<" ";
			a--;
		}
		while(true){
			if(b <= 0)	break;
			cout<<"*";
			b--;
		}
		cout<<endl;
	}
	return 0;
}
