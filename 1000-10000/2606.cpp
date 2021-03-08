//2606
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
bool visit_d[1001] = { false };
vector<int>met[1001];
int c = -1;

//void bfs(int start);
void dfs(int start);

int main() {

	int N, M;

	cin >> N >> M ;

	for (int i = 0; i < M; i++) {
		int u, v;
		cin >> u >> v;
		met[u].push_back(v);
		met[v].push_back(u);
	}

	for (int i = 0; i < N; i++) {
		sort(met[i].begin(), met[i].end());
	}

	dfs(1);
	//bfs(1);
	cout << c << endl;
}

void dfs(int start) {
	visit_d[start] = true;
	c++;
	//cout << start << " ";
	for (int i = 0; i < met[start].size(); i++) {
		int next = met[start][i];
		if (visit_d[next] == false) {
			dfs(next);
			
		}
	}
}
