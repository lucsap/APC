#include <stdio.h>

int ehPrimo(int x) {
	int i;
	for(i = 2; i < x; i++) {
		if(x%i == 0) {
			return 0;
		}
	}
	return 1;
}

int divisoresPrimos(int x) {
	int i,nd = 0;
	for(i = 2; i <= x; i++) {
		if (ehPrimo(i) && (x%i == 0)) {
		nd++;
		}
	}
	return nd;
}

int f(int x, int a, int b) {
	int vf, nd;
	nd = divisoresPrimos(x);
	vf = a*(nd*nd*nd)-(b*x);
	return vf;
}

int main() {
	int i,h,a,b,l,r,max;
	scanf("%d %d %d %d", &a, &b, &l, &r);
	max = f(l, a, b);
	for(i = l+1; i <= r; i++) {
		h = f(i, a, b);
		if(max < h) {
			max = h;
		}
	}

	printf("%d\n", max);
	return 0;
}