#include <iostream>
#include <cstdio>
#include <set>

using namespace std;

int num[5][5];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
set<int> s;

void dfs(int cnt, int x, int y, int n){
	
	int tmp = n*10 + num[x][y];
	
	if(cnt == 6){
		s.insert(n);
		return;
	}
	
	
	for(int i=0;i<4;i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5){
			dfs(cnt+1, nx,ny,tmp);
		}
	}
	
}
int main(void) {
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&num[i][j]);
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			dfs(0,i,j,0);
		}
	}
	cout<<s.size()<<endl;
	
	return 0;
}
