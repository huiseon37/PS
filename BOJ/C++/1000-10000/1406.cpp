//1406
#include <iostream>
#include <stack>
#include <string>
#include <cstdio>
using namespace std;

int main() {
	stack<char> left, right;
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++)	left.push(s[i]);
	int N;
	cin >> N;


	for (int i = 0; i < N; i++) {

		char ans;
		char c;

		cin >> ans;

		if (ans == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (ans == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (ans == 'B') {
			if (!left.empty()) {
				left.pop();
			}

		}
		else if (ans == 'P') {
			cin >> c;
			left.push(c);
		}
	}

	while (!left.empty()) {

		right.push(left.top());
		left.pop();
	}

	while (!right.empty()) {
		printf("%c", right.top());
		right.pop();
	}

}

