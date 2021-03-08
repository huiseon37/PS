//17977
#include<iostream>

using namespace std;

int main(){
   int n;
   cin>>n;
   int dp[1000003];
   dp[3]=0;dp[4]=1;
   for(int i=5;i<=1000003;i++) {
      dp[i] = dp[(i-1)/2+1]+2;
   }
   cout<<dp[n];
}
