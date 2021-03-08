//17968
#include <iostream>

using namespace std;

int main(int){
   
   int n,k,i;
   int A[1001];
   
   A[0] = 1;
   A[1] = 1;
      
   cin>>n;
   
   for(i=2;i<1001;i++){
      int num = 1;
      
      while(true){
         A[i] = num;
      
         for(k=1;i-2*k>=0;k++){
      
            if(A[i]-A[i-k] == A[i-k]-A[i-2*k]){
               break;
            }
         }
         
         if(i-2*k<0){
            break;
         }
         else{
            num++;
         }
      }
      
   }
   
   cout<<A[n]<<endl;
   
   return 0;
}
