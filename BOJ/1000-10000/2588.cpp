//2588
#include <iostream>

using namespace std;

int main() {
    
    int a, b;
    
    cin>>a>>b;
    
    int tmp = b;
    
    cout<<a*(b%10)<<endl;
    b /= 10;
    cout<<a*(b%10)<<endl;
    b /= 10;
    cout<<a*(b%10)<<endl;
    cout<<a*tmp<<endl;
    
	return 0;
}
