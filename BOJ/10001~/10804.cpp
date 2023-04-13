#include <iostream>

using namespace std;

int arr[21];
int arr2[21];
int main(){
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	arr[0] = 0;
	
	for(int i=1;i<=20;i++){
		arr[i] = i;
		arr2[i] = i;
	}
	
	int a,b;
	int k = 0;
	for(int i=0;i<10;i++){
		cin>>a>>b;
		for(int j=a;j<=b;j++){
			arr[j] = arr2[b-k];
			k++;
		}
		k=0;
		for(int n=1;n<=20;n++){
			arr2[n] = arr[n];
		}
	}
	
	for(int i=1;i<=20;i++){
		cout<<arr[i]<<' ';
	}
	return 0;
}
