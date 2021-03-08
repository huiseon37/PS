#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n, m, k, c[1001];
long long x;

struct str{
	int a, b, c;
	bool operator<(const str&x)const{
		return c<x.c;
	}
}v[100000];

int find(int a) {
	if(c[a] == a){
		return a;
	}
	else{
		return c[a] = find(c[a]);
	}
}

void mer(int a, int b){
	c[find(a)]=find(b);
}

int main() {
	
	cin>>n>>m>>k;
	
	for(int i=1;i<=n;i++){
		c[i]=i;
	}
	
	for(int i=0;i<k;i++){
		cin>>x,mer(0,x);
	}
	
	for(int i=0;i<m;i++){
		cin>>v[i].a>>v[i].b>>v[i].c;
	}
	
	sort(v,v+m);
	
	x=0;
	
	for(int i=0;i<m;i++){
		if(find(v[i].a)!=find(v[i].b)){
			x+=v[i].c,mer(v[i].a,v[i].b);
		}
	}
	
	cout<<x;
	
	return 0;
}
