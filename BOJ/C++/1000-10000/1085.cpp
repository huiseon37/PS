//1085
#include <iostream>

using namespace std;

int main(){
	
	int x, y, w, h;
	
	cin>>x>>y>>w>>h;
	
	int a, b;
	
	a = w-x;
	b = h-y;
	
	if(a>x){
		a=x;
	}
	
	if(b>y){
		b=y;
	}
	
	if(a<b){
		cout<<a;
	}
	else{
		cout<<b;
	}
	
	return 0;
}
