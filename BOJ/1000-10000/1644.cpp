//1644
#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<memory.h>

using namespace std;
vector<int>sosu;
bool issosu[4000005];

int main() {
	int num;
	cin >> num;

	memset(issosu, true, sizeof(issosu));

	for (int i = 2; i <= 4000000; i++) {
		if (issosu[i] == true) {
			sosu.push_back(i);
			for (int j = i * 2; j <= 4000000; j += i) {
				issosu[j] = false;
			}
		}
	}

	int right = 0; int left = 0;
	int sum = sosu[0];
	int ans = 0;

	while (left <= right && right < sosu.size() - 1) {

		if (sum < num) {
			if (right <sosu.size() - 1) {
				right++;
				sum += sosu[right];
			}
		}
		if (sum > num) {
			if (left <= right) {
				sum -= sosu[left];
				left++;
			}
		}

		if (sum == num) {
			ans++;
			if (right < sosu.size() - 1) {
				right++;
				sum += sosu[right];
			}
		}
	}

	cout << ans;
	return 0;
}
