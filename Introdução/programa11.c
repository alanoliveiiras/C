#include <stdio.h>

int main(){
	float milhas, km;
	printf("Digite o valor em Milhas: ");
	fflush(stdout);
	scanf("%f", &milhas);
	km = 1.61 * milhas;
	printf("Em milhas: %.2f\n", milhas);
	printf("Em quilômetros: %.2f", km);
	return 0;
}
