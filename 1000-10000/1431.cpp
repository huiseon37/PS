//1431
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sorting (string s1, string s2){
	
	if(s1.size() != s2.size()){
		return s1.size() < s2.size();
	}
	else{
		int s1sum=0, s2sum=0;
		for(int i=0;i<s1.size();i++){
			if('0'<=s1[i] && s1[i]<='9') s1sum += s1[i]-'0';
			if('0'<=s2[i] && s2[i]<='9') s2sum += s2[i]-'0';
		}
		
		if(s1sum != s2sum){
			return s1sum<s2sum;
		}
		else{
			return s1<s2;
		}
	}
	
	
}

int main() {
	
	int n, k;
	vector<string > si;
	
	cin >> n ;
		
	string a;
	
	for(int i=0;i<n;i++){
		
		cin>> a;
		si.push_back(a);
	}
	
	sort(si.begin(), si.end(),sorting);
	
	for(int i=0;i<n;i++){
		
		cout<<si[i]<<endl;
	}

	return 0;
}


