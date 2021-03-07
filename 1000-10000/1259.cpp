#include <iostream>
#include <string>

using namespace std;

string num;

int main(){
	
	while(true){
		cin >> num;
		
		if(num == "0"){
			break;
		}
		
		int i;
		
		for(i=0;i<(num.size()/2);i++){
			
			if(num[i] == num[num.size()-1-i]){
				continue;
			}
			else{
				break;
			}
		}
		
		if(i>=(num.size()/2)){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
		
	}	
	return 0;
}
