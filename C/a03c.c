#include <stdio.h>

int main () {
	int a,b,c,i,N;
	a=1;
	b=2;
	scanf("%d", &N);

	if (N==1) {
		printf("1\n");
	}

	else if (N==2) {
		printf("1\n2\n");
	}

	else {
		printf("1\n2\n");

		for (i=2; i<N; i++) {
			c = ((a+b)-1)%1000000007;
			printf("%d\n", c);
			a=b;
			b=c;
		}
	}
	
	return 0;
}