#include <iostream>
#include <queue>

using namespace std;

int tmt[1001][1001];
bool visited[1001][1001]={0,};

int main(void){
	
	int m, n;
	int xidx, ydix;
	int ans=0;
	int oneday=0;
	
	cin>>m>>n;
	
	queue<pair<int,int> > q;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&tmt[i][j]);
			
			if(tmt[i][j] == 1){
				q.push({i,j});
				visited[i][j] = true;
				oneday++;
			}
			
			if(tmt[i][j] == -1){
				visited[i][j] = true;
			}
		}
	}
	
	int day=0;
	
	while(!q.empty()){
		day = oneday;
		oneday = 0;
		while(day != 0){
			pair<int,int> u = q.front();
			q.pop();
			int x = u.first, y = u.second;
			day--;
			
			//╩С 
			if(!visited[x-1][y] && tmt[x-1][y] != -1 &&x>0){
				q.push({x-1,y});
				visited[x-1][y] = true;
				oneday++;
			}
			//го
			if(!visited[x+1][y] && tmt[x+1][y] != -1 &&x<n-1){
				q.push({x+1,y});
				visited[x+1][y] = true;
				oneday++;
			}
			//аб
			if(!visited[x][y-1] && tmt[x][y-1] != -1 &&y>0){
				q.push({x,y-1});
				visited[x][y-1] = true;
				oneday++;
			}
			//©Л 
			if(!visited[x][y+1] && tmt[x][y+1] != -1 && y<m-1){
				q.push({x,y+1});
				visited[x][y+1] = true;
				oneday++;
			}
		}
		ans++;
	}

	bool notvisit = false;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(visited[i][j]==0){
				notvisit = true;
				break;
			}
		}
	}
	
	if(notvisit){
		cout<<"-1"<<endl;
	}
	else if(ans == 0){
		cout<<ans<<endl;
	}
	else{
		cout<<ans-1<<endl;	
	}
	
	return 0;
}
