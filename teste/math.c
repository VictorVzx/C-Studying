#include <stdio.h>

int main(void){
	
	int soma = 0;
	for (int i = 1; i <= 5; i++){
		soma = soma + (2 * i + 1);
	}

	printf("%d\n", soma);

	return 0;
}
