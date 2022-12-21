#include <stdio.h>

int main(){
	float cubicos, litros;
	printf("Digite o valor em Metros Cúbicos: ");
	fflush(stdout);
	scanf("%f", &cubicos);
	litros = 1000*cubicos;
	printf("Em m3: %.1f\n", cubicos);
	printf("Em litros: %.1f", litros);
	return 0;
}
