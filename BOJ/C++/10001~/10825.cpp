#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student{
    string name;
    int ko;
    int eng;
    int math;
};

bool compare(Student a, Student b){
	if(a.ko == b.ko){
		if(a.eng == b.eng){
			if(a.math==b.math){
				return a.name < b.name;
			}
			else{
				return a.math > b.math;
			}
		}
		else{
			return a.eng < b.eng;
		}
	}
	else{
		return a.ko > b.ko;
	}
}
int main(){
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	
	cin >> n;
	
	vector<Student> vec(n);
	
	for(int i=0;i<n;i++){
		cin>>vec[i].name>>vec[i].ko>>vec[i].eng>>vec[i].math;
	}
	
	sort(vec.begin(),vec.end(),compare);
	
	for(int i=0;i<n;i++){
		cout<<vec[i].name<<"\n";
	}
	
	return 0;
}
