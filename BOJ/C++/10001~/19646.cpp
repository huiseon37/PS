//19646
#include <iostream>
#define N 200001

using namespace std;

int nrr[N], seg[N*2], n, a;

int query(int n, int nl, int nr, int val){
	if(nl==nr) return nl;
	int mid = (nl+nr)/2;
	if(seg[n*2]<val){
		return query(n*2+1,mid+1,nr,val-seg[n*2]);
	}
	else{
        return query(n*2,nl,mid,val);
    }
}

int update(int n, int nl, int nr, int a){
	if(nl>a || a>nr) return seg[n];
	if(nl==nr) return seg[n] = 0;
	int mid = (nl+nr)/2;
	return seg[n] = update(n*2,nl,mid,a)+update(n*2+1,mid+1,nr,a);
}

int first(int n, int nl, int nr){
	if(nl==nr) return seg[n] = nrr[nl];
	int mid = (nl+nr)/2;
	return seg[n] = first(n*2,nl,mid)+first(n*2+1,mid+1,nr);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	cin >> n;	
	
	for(int i=1;i<=n;i++){
		cin>>nrr[i];
	}
	
	first(1,1,n);
	
	for(int i=0;i<n;i++){
		cin>>a;
		a = query(1,1,n,a);
		update(1,1,n,a);
		cout<<a<<" ";
	}
	
	return 0;
}
