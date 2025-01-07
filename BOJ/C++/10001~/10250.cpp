#include <iostream>

using namespace std;

int main() {
	
	int t, h, w, n;
	int x, y;
	
	cin >> t;
	
	for(int i=0;i<t;i++){
		cin >> h >> w >> n;
		
		y = n % h;
		x = (n / h)+1;
		
		if(y==0){
			y = h;
			x--;
		}
		
		int ans = y * 100;
		ans += x;
		
		cout<<ans<<endl;
	}
	
	
	return 0;
}
