#include <stdio.h>

int main(){
	float polegada, cm;
	printf("Digite o valor em Polegadas: ");
	fflush(stdout);
	scanf("%f", &polegada);
	cm = polegada * 2.54;
	printf("Em polegadas: %.1f\n", polegada);
	printf("Em centímetros: %.1f", cm);
	return 0;
}
