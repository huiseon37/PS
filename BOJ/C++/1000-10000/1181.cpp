//소트문제 (내가만드는 소트) 

#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

string word[20001];

bool compare(string a, string b){
	if(a.size() == b.size()){
		return a<b;
	}
	else{
		return a.size()<b.size();
	}
}
int main() {
	
	int n;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>word[i];
	}
	
	sort(word,word+n,compare);
	
	for(int i=0;i<n;i++){
		if(i != 0){
			if(word[i].compare(word[i-1]) == 0){
			continue;
			}
		}
		cout<<word[i]<<endl;
	}
	
	return 0;
}

