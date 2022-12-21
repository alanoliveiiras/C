#include <stdio.h>

int main(){
	float n1,n2,n3,quadrado1,quadrado2,quadrado3, soma;
	printf("Digite três valores\n");
	printf("Primeiro valor: ");
	fflush(stdout);
	scanf("%f", &n1);
	quadrado1 = n1*n1;
	printf("Segundo valor: ");
	fflush(stdout);
	scanf("%f", &n2);
	quadrado2 = n2*n2;
	printf("Terceiro valor: ");
	fflush(stdout);
	scanf("%f", &n3);
	quadrado3 = n3*n3;
	soma = quadrado1 + quadrado2 + quadrado3;
	printf("O quadrado de %.1f é igual a %.2f.\n", n1, quadrado1);
	printf("O quadrado de %.1f é igual a %.2f.\n", n2, quadrado2);
	printf("O quadrado de %.1f é igual a %.2f.\n", n3, quadrado3);
	printf("A soma entre os quadrados são %.2f.", soma);
	return 0;
}
