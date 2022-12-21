#include <stdio.h>

int main(){
	float k, libra;
	printf("Digite o valor em Quilogramas: ");
	fflush(stdout);
	scanf("%f", &k);
	libra = k/0.45;
	printf("Em quilogramas: %.1f\n", k);
	printf("Em libras: %.1f", libra);
	return 0;
}
