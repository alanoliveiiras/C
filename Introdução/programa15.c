#include <stdio.h>

int main(){
	float polegada, cm;
	printf("Digite o valor em Centímetros: ");
	fflush(stdout);
	scanf("%f", &cm);
	polegada = cm/2.54;
	printf("Em centímetros: %.1f\n", cm);
	printf("Em polegadas: %.1f", polegada);
	return 0;
}
