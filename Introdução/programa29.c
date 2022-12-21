#include <stdio.h>

int main(){
	float valor, desconto, novo;
	printf("Digite o valor do produto R$: ");
	fflush(stdout);
	scanf("%f", &valor);
	desconto = valor*0.10;
	novo = valor-desconto;
	printf("A vista, com desconto de 10 porcento: R$%.2f.\n", novo);
	printf("O valor de cada parcela em 3x (sem juros): R$%.2f.\n", valor/3);
	printf("A comissão do vendedeor, se a venda é a vista: R$%.2f.\n", novo*0.05);
	printf("A comissão do vendedor, se a venda for parcelada: R$%.2f.\n", valor*0.05);
	return 0;
}
