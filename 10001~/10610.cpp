#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string n;
	vector<int> nstr;
	
	cin>>n;
	
	int num = 0, index = 0;
	bool iszero = false;
	
	for(int i=0;i<n.length();i++){
		if(n[i] == '0'){
			iszero = true;
			index = i;
		}
		num += (int)n[i] - 48;
	}
	
	if((num % 3) != 0 || iszero == false) {
		cout<<-1<<"\n"; 
		return 0;
	}

	
	n[index] = n[n.length()-1];
	n[n.length()-1] = '0';
	
	sort(n.begin(),n.end()-1,greater<int>());

	cout<<n<<endl;
	return 0;
}
