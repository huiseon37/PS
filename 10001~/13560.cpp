//13560
#include<iostream>
#include<cstdio>
#include<algorithm>
#define MAX 10000
using namespace std;

int main(){
   int n, sum=0, arrSum=0;
   int arr[MAX];
   
   scanf("%d",&n);
   for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
      sum+=arr[i];
   }
   sort(arr, arr+n);
   int conSum = n*(n-1)/2;
   for(int i=0;i<n;i++){
      arrSum += arr[i];
      if(arrSum<i*(i+1)/2){
         printf("-1\n");
         return 0;
      }
   }
   int num = sum==conSum? 1 : -1;
   printf("%d\n",num);

} 
