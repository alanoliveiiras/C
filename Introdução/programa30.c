#include <stdio.h>

int main(){
	int numero, unidade, dezena, centena, temp1, temp2;
	printf("Digite um n�mero inteiro entre 100 a 999: \n");
	fflush(stdout);
	scanf("%d", &numero);
	unidade = numero/100;
	temp1 = numero%100;
	dezena = temp1/10;
	temp2 = (numero-100)/10;
	centena = (numero-100)- temp2*10;
	printf("N�mero original: %d%d%d\n", unidade,dezena,centena);
	printf("N�mero invertido: %d%d%d", centena,dezena,unidade);
	return 0;
}
