#include <stdio.h>

int main(){
	float polegada, cm;
	printf("Digite o valor em Cent�metros: ");
	fflush(stdout);
	scanf("%f", &cm);
	polegada = cm/2.54;
	printf("Em cent�metros: %.1f\n", cm);
	printf("Em polegadas: %.1f", polegada);
	return 0;
}
