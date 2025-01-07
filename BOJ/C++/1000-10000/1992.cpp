//1992
#include <iostream>
#include <vector>

using namespace std;

vector<char> n[100];
int ans[3] = { 0 };

int check(int x, int y, int a);
void solve(int x, int y, int a);

int main() {

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			char a;
			cin >> a;
			n[i].push_back(a);
		}
	}

	solve(0, 0, N);

	return 0;
}

int check(int x, int y, int a) {

	for (int i = x; i < x + a; i++) {
		for (int j = y; j < y + a; j++) {
			if (n[i][j] != n[x][y]) {
				return false;
			}
		}
	}

	return true;
}

void solve(int x, int y, int a) {

	if (check(x, y, a)) {
		cout << n[x][y];
		return;
	}
	else {
		int m = a / 2;
		cout << '(';
		solve(x, y, m);
		solve(x, y + m, m);

		solve(x + m, y, m);
		solve(x + m, y + m, m);
		cout << ')';
	}
}
