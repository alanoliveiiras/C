#include <stdio.h>

int main(){
	float metro, jardas;
	printf("Digite o valor em Metros: ");
	fflush(stdout);
	scanf("%f", &metro);
	jardas = metro/0.91;
	printf("Em metros: %.2f\n", metro);
	printf("Em jardas: %.2f", jardas);
	return 0;
}
