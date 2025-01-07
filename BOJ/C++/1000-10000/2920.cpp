#include <iostream>

using namespace std;

int main(){
	
	int n;
	int mu[8], as=0, ds=0;
	
	for(int i=0;i<8;i++){
		cin>>mu[i];
	}
	
	for(int i=0;i<8;i++){
		if(mu[i] == i+1){
			as++;
		}
		if(mu[i] == 8-i){
			ds++;
		}
	}
	
	if(as==8) {
		cout<<"ascending"<<endl;
	}
	else if(ds == 8){
		cout<<"descending"<<endl;
	}
	else{
		cout<<"mixed"<<endl;
	}
	return 0;
}
