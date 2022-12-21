#include <stdio.h>

int main(){
	float litro, cubico;
	printf("Digite o valor em Litros: ");
	fflush(stdout);
	scanf("%f", &litro);
	cubico = litro/1000;
	printf("Em Litro: %.1f\n", litro);
	printf("Em m3: %f", cubico);
	return 0;
}
