#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
bool visited[1001][1001];
int dis[1001][1001] = {0, };
int arr[1001][1001];

queue<pair<int,int> > q;

int main(void) {
	
	int n,m,xidx,yidx;
	int cnt = 0;	
	
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j] == 2){
				xidx = i;
				yidx = j;
			}
		}
	}
	
	q.push({xidx,yidx});
	visited[xidx][yidx] = true;
	
	while(!q.empty()){
		pair<int,int> u = q.front();
		q.pop();
		
		for(int i=0;i<4;i++){
			int nx = u.first + dx[i];
			int ny = u.second + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m){
				if((!visited[nx][ny]) && arr[nx][ny] != 0){
					visited[nx][ny] = true;
					q.push({nx,ny});
					dis[nx][ny] =  dis[u.first][u.second]+1;
				}
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j] ==0){
				printf("0 ");
			}
			else if(visited[i][j] == false){
				printf("-1 ");
			}
			else{
				printf("%d ",dis[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
