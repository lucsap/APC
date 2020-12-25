#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int *R[255], *G[255], *B[255], *Rf[255], *Gf[255], *Bf[255] , *D[], i = 0;
	float Med;
	R[i] = 0;
	G[i] = 0;
	B[i] = 0;
	Rf[i] = 0;
	Gf[i] = 0;
	Bf[i] = 0;

	for (i = 0; i < 20; i++) {
		R[i] = R[i+1];
		G[i] = G[i+1];
		B[i] = B[i+1];
	}

	for(i = 0; i < 20; i++) {
		Rf[i] = (R[i-1] + R[i] + R[i+1])/3;
		Gf[i] = (G[i-1] + G[i] + G[i+1])/3;
		Bf[i] = (B[i-1] + B[i] + B[i+1])/3;
	}

	for(i = 0; i < 20; i++) {
		D[i] = sqrt(pow((Rf[i] - R[i]),2) + pow((Gf[i] - G[i]),2) + pow((Bf[i] - B[i]),2));
	}

	for(i = 0; i < 20; i++) {
		Med += D[i];
	}

	Med = Med/20;

	for(i = 0; i < 20; i++) {
		printf("R = %d; G = %d; B = %d; // Rf = %d; Gf = %d; Bf = %d // Distancia = %d\n", R[i], G[i], B[i], Rf[i], Gf[i], B[i], D[i]);
	}

	printf("A distancia media eh = %.3f\n", Med);

	return 0;
}