//9093
#include <iostream>
#include <string>

using namespace std;
int main() {

	int n;
	char arr[1001];
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) {
	
		
		if (i == 0) getline(cin, str);
		getline(cin, str);

		int len = str.length();
		int pass = 0;
		int anum = 0;
		for (int j = 0; j <=len; j++) {
			if (str[j] != ' ' && str[j] != '\0') {
				pass++;
			}
			else {
				for (int k = 0; k < pass; k++) {
					arr[anum] = str[j - 1-k];
					anum++;
				}
				pass = 0;
				arr[anum] = ' ';
				anum++;
			}
		}

		for (int i = 0; i < len; i++) {
			cout<<arr[i];
		}
		
		cout << endl;
	}
	return 0;
}
