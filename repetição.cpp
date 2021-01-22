#include <stdio.h>

int main() {
	int cont=0, numero=0;
	
	printf("informe o numero: ");
	scanf("%d", &numero);
	
	if(numero<=10){
		printf("numero invalido, deve ser maior que 10\n");
	}else{
		for(cont=1;cont<=numero;cont++){
			if(cont%5==0){
				printf("***\n");
			}else {
				printf("%d\n", cont);
			}
		}
	}
	
	return 0;
}
