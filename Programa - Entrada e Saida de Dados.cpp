#include <stdio.h>

int main (){
	int idade=0;
	char sexo, nome[60];
	float altura;
	
	printf("---- ENTRADA DE DADOS ----\n");
	printf("Informe o nome: ");
	scanf("%[^\n]s",&nome); //%s formatado para espaços
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	printf("Informe o sexo: ");
	scanf(" %c", &sexo); //Colocado um espaço para não bugar o programa// 
	
	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	printf("---- SAIDA DE DADOS ----\n");
	printf("Nome informado: %s\n", nome); //%s para saída
	printf("Idade informada: %d\n", idade);
	printf("Idade em 15 anos: %d\n", idade+15);
	printf("Sexo informado: %c\n", sexo); 
	printf("Altura informada: %.2f\n", altura); // duas casas depois da virgula
	
	return 0;
}
