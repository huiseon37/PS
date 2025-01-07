//2170
#include<iostream> 
#include<queue>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;

const int INF = 1000000001;
int N;
int main() {
	
	vector<pair<int, int> > arr;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		arr.push_back({ a,b });
	}
	
	sort(arr.begin(), arr.end());
	int l = -INF;
	int r = -INF;
	long long result = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i].first > r)
		{
			result += r - l;
			l = arr[i].first;
			r = arr[i].second;
		}
		else
		{
			r = max(r, arr[i].second);
		}
	}
    result += r - l;
	cout << result << endl;
}
