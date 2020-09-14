#include <stdio.h>

	int main (){
		int idade=0,diferenca=0;
		
		printf("Informe a idade: ");
		scanf("%d", &idade);
		
		if(idade>=18){
			printf("Permitido ter CNH");
		}else{
			printf("Nao eh permitido ter CNH...\n");
			
			diferenca = 18-idade;
			
			if(diferenca == 1){
				printf("Retorne em 1 ano\n");	
			}else{
				printf("Retorne em %d anos\n", diferenca);
			}
		}
		
		
		return 0;
	}


