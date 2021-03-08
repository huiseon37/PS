//4344
#include <stdio.h>

int main() {

	int c, k, i, n, sum, count;
	int score[1000];
	float avg;

	scanf("%d", &c);
	
	for (k = 0; k < c; k++) {
		sum = 0, count = 0;
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d",&score[i]);
		}
		for (i = 0; i < n; i++) {
			sum += score[i];
		}
		avg = (float) sum / n;

		for (i = 0; i < n; i++) {
			if (score[i] > avg) count++;
		}

		printf("%.3f%%\n", (float) count / n * 100);

	}
	return 0;
}
