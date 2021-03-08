//1463
#include <stdio.h>

int main()
{
	int arr[1000001];
	int i, n;
	scanf("%d", &n);

	arr[0] = -1;
	arr[1] = 0;

	for (i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + 1; 
		if (i % 2 == 0) { 
			arr[i] = arr[i] > arr[i / 2] + 1 ? arr[i / 2] + 1 : arr[i] ; 
		}
		if (i % 3 == 0) { 
			arr[i] = arr[i] > arr[i / 3] + 1 ? arr[i / 3] + 1 : arr[i];
		}
	}

	printf("%d", arr[n]); 

	return  0;
}

