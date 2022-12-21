#include <stdio.h>

int main(){
	int sucessor, antecessor, num;
	printf("Digite algum valor: ");
	fflush(stdout);
	scanf("%d", &num);
	sucessor = num + 1;
	antecessor = num - 1;
	printf("%d < %d < %d", antecessor, num, sucessor);
	return 0;
}
