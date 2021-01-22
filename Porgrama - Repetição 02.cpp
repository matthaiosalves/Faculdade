#include <stdio.h>

int main() {
	int cont=0, numero=0;
	
	printf("informe o numero: ");
	scanf("%d", &numero);
	
	if(numero<20){
		printf("numeuro deve ser maior ou igual a 20\n");
	}else{
		if(numero>100){
			printf("numero deve ser menor ou igual ao 100\n");
		}else{
			if(numero%10!=0){
				printf("numero deve ser multiplo de 10\n");
			}else{
				for(cont=1;cont<=numero;cont++){
					printf("%d\n", cont);
					if(cont%15==0){
						printf("M15\n");
					}else{
						if(cont%10==0){
						printf("M10\n");
					}else{
						if(cont%5==0){
						printf("M5\n");
					}else{
						printf("%d\n", cont);
					}
					}
					}
				}
			}
		}
	}
	
	return 0;
}
