#include <iostream>

using namespace std;
	
int g, p, ans=0;
int grr[100001];

int plane(int gnum){
	
	if(grr[gnum]<0)	return gnum;
	
	int next = plane(grr[gnum]);
	grr[gnum] = next;
	return next;
	
}

void setz(int isin){
	grr[isin] = plane(isin-1);
}

int main() {
	
	cin >> g >> p;
	
	for(int i=0;i<=g;i++){
		grr[i] = -1;
	}

	for(int i=1;i<=p;i++){
		int g;
		cin>>g;
		
		int isin = plane(g);
		
		if(isin == 0){
			break;
		}
		else{
			ans++;
			setz(isin);
		}
	}
	
	cout<<ans<<endl;
	return 0;
}
