//14954
#include<iostream>
#include<vector>

using namespace std;

vector<int>v;

void happy(int);

int main(void){
    int n;
    cin >> n;

    happy(n);

    return 0;
}

void happy(int n){
    if(n==1){
        cout<< "HAPPY" <<endl;
        return;
    }
    int temp = n;
    int num = 0;
    while(temp){
        num += (temp%10)*(temp%10);
        temp /=10;
    }
    for(int i=0; i<v.size(); i++){
        if(num==v[i]){
            cout<< "UNHAPPY" <<endl;
            return;
        }
    }
    v.push_back(num);
    happy(num);
}
