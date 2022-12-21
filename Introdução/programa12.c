#include <stdio.h>

int main(){
	float km, milhas;
	printf("Digite o valor em Quilômetros: ");
	fflush(stdout);
	scanf("%f", &km);
	milhas = km/1.61;
	printf("Em quilômetros: %.1f\n", km);
	printf("Em milhas: %.1f", milhas);
	return 0;
}
