#include <stdio.h>

int main (){
	int idade=0;
	char sexo, nome[60];
	float altura;
	
	printf("---- ENTRADA DE DADOS ----\n");
	printf("Informe o nome: ");
	scanf("%[^\n]s",&nome); //%s formatado para espa�os
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	printf("Informe o sexo: ");
	scanf(" %c", &sexo); //Colocado um espa�o para n�o bugar o programa// 
	
	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	printf("---- SAIDA DE DADOS ----\n");
	printf("Nome informado: %s\n", nome); //%s para sa�da
	printf("Idade informada: %d\n", idade);
	printf("Idade em 15 anos: %d\n", idade+15);
	printf("Sexo informado: %c\n", sexo); 
	printf("Altura informada: %.2f\n", altura); // duas casas depois da virgula
	
	return 0;
}
