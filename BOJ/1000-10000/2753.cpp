#include <iostream>

using namespace std;

int main(void){
	
	int n;
	
	cin>>n;
	
	if(n%100 == 0){
		if(n%400 == 0){
			cout<<"1"<<endl;
		}
		else{
			cout<<"0"<<endl;	
		}
	}
	else if(n%4 == 0){
		cout<<"1"<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
	return 0;
}
