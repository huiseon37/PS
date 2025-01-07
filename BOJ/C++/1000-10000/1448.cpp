#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	vector<int> strow;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		strow.push_back(a);
	}
	
	sort(strow.begin(), strow.end(),greater<int>());
	
	bool isRec = false;
	int index = 0;
	
	for(int i=0;i<n-2;i++){
		if(strow[i] < strow[i+1]+strow[i+2]){
			isRec = true;
			index = i;
			break;
		}
	}
	
	if(isRec == false){
		cout<<-1<<endl;
	}
	else{
		cout<<strow[index]+strow[index+1]+strow[index+2]<<endl;
	}

	return 0;
}
