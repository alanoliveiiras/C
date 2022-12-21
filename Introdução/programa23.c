#include <stdio.h>

int main(){
	float n1,n2,n3,n4, media;
	printf("Digite quatro notas\n");
	printf("Primeira nota: ");
	fflush(stdout);
	scanf("%f", &n1);
	printf("Segunda nota: ");
	fflush(stdout);
	scanf("%f", &n2);
	printf("Terceira nota: ");
	fflush(stdout);
	scanf("%f", &n3);
	printf("Quarta nota: ");
	fflush(stdout);
	scanf("%f", &n4);
	media = (n1 + n2 + n3 + n4)/4.0;
	printf("A média das notas é igual a %.1f", media);
	return 0;
}
