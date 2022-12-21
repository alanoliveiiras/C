#include <stdio.h>

int main(){
	float libra, k;
	printf("Digite o valor em Libras: ");
	fflush(stdout);
	scanf("%f", &libra);
	k = libra*0.45;
	printf("Em libras: %.1f\n", libra);
	printf("Em quilogramas : %.1f", k);
	return 0;
}
