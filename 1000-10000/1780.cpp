//1780
#include <iostream>
#include <vector>

using namespace std;

vector<int>n[3000];
int N;
int ans[3] = { 0 };

int check(int x, int y, int a);
void solve(int x, int y, int a);

int main() {

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int a;
			cin >> a;
			n[i].push_back(a);
		}
	}

	solve(0, 0, N);

	cout << ans[0] << endl;
	cout << ans[1] << endl;
	cout << ans[2] << endl;

	return 0;
}

int check(int x, int y, int a) {

	for (int i = x; i < x+a; i++) {
		for (int j = y; j <y+ a; j++) {
			if (n[i][j] != n[x][y]) {
				return false;
			}
		}
	}
	return true;
}

void solve(int x, int y, int a) {

	if (check(x,y,a)) {
		ans[n[x][y]+1] += 1;
		return;
	}
	else {
		int m = a / 3;
	
		solve(x, y, m);
		solve(x, y + m, m);
		solve(x, y + 2 * m, m);

		solve(x + m, y, m);
		solve(x + m, y + m, m);
		solve(x + m, y + 2 * m, m);
	
		solve(x + 2 * m, y, m);
		solve(x + 2 * m, y + m, m);
		solve(x + 2 * m, y + 2 * m, m);
		
	}
}
