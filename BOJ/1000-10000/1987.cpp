#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char board[21][21];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
vector<char> v;
int ans = 0;
int r, c;
vector<int> test;
void dfs(int cnt, int x, int y){
	
	ans = max(ans,cnt);
	
	for(int i=0;i<4;i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx <r  && ny >= 0 && ny < c){
			
			char ch = board[nx][ny];			
			
			auto f = find(v.begin(),v.end(),ch);
	
			if(f == v.end()){
				
				v.push_back(ch);
				dfs(cnt+1, nx,ny);
				v.pop_back();
			}
		}
		
	}
	
}

int main(void) {
	
	cin>>r>>c;
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>board[i][j];
		}
	}
	
	v.push_back(board[0][0]);
	
	dfs(1,0,0);
	
	cout<<ans<<endl;
	
	return 0;
}
