#include <iostream>

using namespace std;

int main(void){
	
	int a=1, b=1, c=1;
	
	while(true){
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0)	break;
		
		if(a>b){
			if(a>c){
				if((b*b)+(c*c) == a*a){
					cout<<"right"<<endl;
				}
				else{
					cout<<"wrong"<<endl;
				}
			}else{
				if((a*a)+(b*b) == c*c){
					cout<<"right"<<endl;
				}
				else{
					cout<<"wrong"<<endl;
				}
			}
		}
		else{
			if(b>c){
				if((a*a)+(c*c) == b*b){
					cout<<"right"<<endl;
				}
				else{
					cout<<"wrong"<<endl;
				}
			}
			else{
				if((a*a)+(b*b) == c*c){
					cout<<"right"<<endl;
				}
				else{
					cout<<"wrong"<<endl;
				}
			}
		}
	}
	return 0;
}
