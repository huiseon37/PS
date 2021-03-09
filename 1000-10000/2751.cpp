//2751 - 머지소트 이용 
#include <iostream>
#include <cstdio>

using namespace std;

int num[1000001];
int sortnum[1000001];

void merge(int left, int mid, int right){
	int i, j, k, l;

	
	i = left;
	j = mid+1;
	k = left;
	
	while(i<=mid && j<=right){
		if(sortnum[i]<=sortnum[j]){
			num[k] = sortnum[i++];
		}
		else{
			num[k] = sortnum[j++];
		}
		k++;
	}
	
	if(i>mid){
		for(l=j; l<=right; l++){
			num[k++] = sortnum[l];
		}
	}
	else{
		for(l=i; l<=mid;l++){
			num[k++] = sortnum[l];
		}
	}
	
	for(l=left; l<=right; l++){
		sortnum[l] = num[l];
	}
}

void mergeSort(int left, int right){
	
	if(left<right) {
	
		int mid = (left+right)/2;
		mergeSort(left,mid);
		mergeSort(mid+1,right);
		merge(left, mid, right);
	}
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&sortnum[i]);
	}
	
	mergeSort(0,n-1);
	
	for(int i=0;i<n;i++){
		printf("%d\n",sortnum[i]);
	}
	
	return 0;
}
