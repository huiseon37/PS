#include <iostream>
#include <cstdio>

using namespace std;

int p[128][128];
int white = 0, blue = 0;

int dq(int x1,int y1, int x2, int y2){
	
	int a = p[x1][y1];
	bool same = true;
	int midx = (x1+x2)/2;
	int midy = (y1+y2)/2;
	
	for(int i=x1;i<x2;i++){
		for(int j=y1;j<y2;j++){
			if(p[i][j] != a){
				same = false;
				break;	
			}
		}
		if(same == false){
			break;
		}
	}
	
	if(same == false){
		dq(x1,y1, midx,midy);
		dq(x1,midy,midx,y2);
		dq(midx,y1,x2,midy);
		dq(midx,midy,x2,y2);
		return 0;
	}
	else{
		if(a == 0){
			white++;
		}
		else if(a == 1){
			blue++;
		}
		return 0;
	}	
}
int main(void){
	
	int n;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&p[i][j]);
		}
	}
	
	dq(0,0,n,n);
	
	cout<<white<<endl<<blue<<endl;
	
	return 0;
}
