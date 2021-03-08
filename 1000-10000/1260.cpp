//1260
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
bool visit_d[1001] = { false };
vector<int>met[1001];

void bfs(int start);
void dfs(int start);

int main() {

	int N, M, V;

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		int u, v;
		cin >> u >> v;
		met[u].push_back(v);
		met[v].push_back(u);
	}

	for (int i = 0; i < N; i++) {
		sort(met[i].begin(), met[i].end());
	}

	dfs(V);
	cout << endl;
	bfs(V);
	cout << endl;
}

void dfs(int start) {
	visit_d[start] = true;
	cout << start << " ";
	for (int i = 0; i < met[start].size(); i++) {
		int next = met[start][i];
		if (visit_d[next] == false) {
			dfs(next);
		}
	}
}

void bfs(int start) {
	queue<int> q;
	bool visit_b[1001] = { false };
	visit_b[start] = true;
	q.push(start);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		cout << now << " ";
		for (int i = 0; i < met[now].size(); i++) {
			int next = met[now][i];
			if (visit_b[next] == false) {
				visit_b[next] = true;
				q.push(next);
			}
		}
	}

}
