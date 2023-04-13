//3020
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int INF = 987654321;

int main(void)

{
	int n, h;
	cin >> n >> h;

	vector<int> bottom(n / 2), top(n / 2);
	for (int i = 0; i < n / 2; i++) {
		cin >> bottom[i] >> top[i];
	}

	sort(bottom.begin(), bottom.end());
	sort(top.begin(), top.end());

	int result = INF;
	int cnt = 1;
	for (int i = 1; i <= h; i++)

	{
		int temp = bottom.size() - (lower_bound(bottom.begin(), bottom.end(), i) - bottom.begin());

		temp += top.size() - (upper_bound(top.begin(), top.end(), h - i) - top.begin());

		if (result == temp)	cnt++;

		else if (result > temp){

			result = temp;
			cnt = 1;

		}
	}
	cout << result << " " << cnt << "\n";
	return 0;
}

