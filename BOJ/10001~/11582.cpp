#include <iostream>
#include <cstdio>

using namespace std;

int p = 0;
int n;
int arr[1050000];
int arr2[1050000];
 
void merge(int left, int right){
	if(right-left > n/p){
		return;
	}
	int mid = (left+right)/2;
	
	int i = left;
	int j = mid+1;
	int k = 0;
	
	while (i <= mid && j <= right)
	{
		if (arr[i] <= arr[j]) 
			arr2[k++] = arr[i++]; 
		else
			arr2[k++] = arr[j++];
	}
	while (i <= mid) arr2[k++] = arr[i++]; 
	while (j <= right) arr2[k++] = arr[j++]; 
	for (int i = left; i <= right; i++) {
		arr[i] = arr2[i - left]; 
	}
	
}

void partition(int left, int right){
	
	if(left == right) return;
	int mid;
	mid = (left+right)/2;
	partition(left, mid);
	partition(mid+1, right);
	merge(left,right);
}

int main(){
	
	cin >> n;
	
	for (int i = 0; i < n; i++) { 
		scanf("%d", &arr[i]); 
	}
	
	cin>>p;
	
	partition(0, n-1);
	
	for (int i = 0; i < n; i++) { 
		printf("%d ", arr[i]); 
	}
	
	return 0;
}
