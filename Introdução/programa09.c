#include <stdio.h>

int main(){
	float km, metro;
	printf("Digite o valor em Quil�metros: ");
	fflush(stdout);
	scanf("%f", &km);
	metro = km/3.6;
	printf("Em quil�metros: %.2f\n", km);
	printf("Em metros: %.2f", metro);
	return 0;
}
