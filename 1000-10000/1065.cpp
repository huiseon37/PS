//1065
#include <stdio.h>

int main() {

	int n,i,fir,sec,thr,test,count=0;

	scanf("%d", &n);

	if (n < 100)
		printf("%d", n);
	else {
		for (i = 100; i <= n; i++) {
			fir = i / 100;
			sec = (i % 100) / 10;
			thr = (i % 100) % 10;
			if ((fir - sec) == (sec - thr)) {
				count++;
			}
		}
		printf("%d", count + 99);
	}

	return 0;
}
