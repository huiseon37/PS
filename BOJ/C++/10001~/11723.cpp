#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
 
int m, num, s;
string op;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    cin >> m;
    for(int i=0;i<m;i++)
    {
        op.clear();
        cin >> op;
        if (op == "add")
        {
            cin >> num;
            s |= (1 << num);
        }
        else if (op == "remove")
        {
            cin >> num;
            s &= ~(1 << num);
        }
        else if (op == "check")
        {
            cin >> num;
            if (s & (1 << num))
            	printf("1\n");
            else    
            	printf("0\n");
        }
        else if (op == "toggle")
        {
            cin >> num;
            s ^= (1 << num);
        }
        else if (op == "all")
        {
           s = (1 << 21) - 1;
        }
        else if (op == "empty")
        {
            s = 0;
        }
    }
    return 0;
}
