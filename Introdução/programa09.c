#include <stdio.h>

int main(){
	float km, metro;
	printf("Digite o valor em Quilômetros: ");
	fflush(stdout);
	scanf("%f", &km);
	metro = km/3.6;
	printf("Em quilômetros: %.2f\n", km);
	printf("Em metros: %.2f", metro);
	return 0;
}
