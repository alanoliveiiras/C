#include <stdio.h>

int main(){
	float km, metro;
	printf("Digite o valor em Metros: ");
	fflush(stdout);
	scanf("%f", &metro);
	km = metro*3.6;
	printf("Em metros: %f\n", metro);
	printf("Em quilômetros: %f", km);
	return 0;
}
