#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

bool visited[100001];
queue<pair<int,int> > q;

int main(void) {
	
	int n,k;
	int cnt = 0;	
	
	scanf("%d %d",&n,&k);
	
	q.push({n,0});
	
	int out = false;
	
	while(!out){
		pair<int,int> u = q.front();
		q.pop();
		
		int v = u.first;
		
		if(!visited[v]){
			visited[v] = true;
		
			if(v == k){
				cnt = u.second;
				out = true;
				break;
			}
			
			if(v+1>=0 && v+1<=100000){
				q.push({v+1,u.second+1});
			}
			if(v-1>=0 && v-1<=100000){
				q.push({v-1,u.second+1});
			}
			if(v*2>=0 && v*2<=100000){
				q.push({v*2,u.second+1});
			}
		}
	}
	
	cout<<cnt<<endl;
	
	return 0;
}
