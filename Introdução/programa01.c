#include <stdio.h>

int main(){
	int numero;
	printf("Digite algum valor: ");
	fflush(stdout);
	scanf("%d", &numero);
	printf("Voc� digitou o n�mero %d.", numero);
	return 0;
}
