#include <stdio.h>

int main(){
	int n1, n2, n3, soma;
	printf("Digite tr�s valores\n");
	printf("Primeiro valor: ");
	fflush(stdout);
	scanf("%d", &n1);
	printf("Segundo valor: ");
	fflush(stdout);
	scanf("%d", &n2);
	printf("Terceiro valor: ");
	fflush(stdout);
	scanf("%d", &n3);
	soma = n1 + n2 + n3;
	printf("A soma entre eles s�o %d.", soma);
	return 0;
}
