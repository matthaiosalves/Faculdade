#include <stdio.h>

#define MAXIMO 3

int main(){
	float n[MAXIMO]={0},soma=0,media=0,maior=0;
	int i=0;

	for(i=0;i<MAXIMO;i++){
		printf("Informe a %da nota: ",i+1);
		scanf("%f",&n[i]);
		
		soma = soma + n[i];
	}
		
	media = soma / MAXIMO;
	
	printf("Media das notas dos %d alunos: %.2f\n",MAXIMO,media);
	
	printf("Lista de todas as notas: \n");
	
	for(i=0;i<MAXIMO;i++){ //varrer o vetor
		printf("Nota %d => %.1f\n",i+1,n[i]);	
	}
	
	for(i=0;i<MAXIMO;i++){
		if(i==0){
			maior = n[i];
		}else{
			if(n[i]>maior){
			maior = n[i];
		}
		}
		
			
	}
	
	printf("A maior nota eh: %.1f",maior);
	
	return 0;
}



/*
Utilizem notas como int.
Elabore um programa que receba no m�nimo 1 nota e no m�ximo AT� 20 notas, as notas dever�o estar validadas entre 0 e 10, retorne:
	A maior nota da sala
	A menor nota da sala
	Quantidade de notas m�ltiplas de 3
	Quantidade de notas m�ltiplas de 5
	Quantidade de alunos com a maior nota
	Apresente as notas dos alunos "pares" (n�o o �ndice, mas 1a nota � do 1o aluno...)
	Apresente as notas dos alunos "�mpares" em ordem invertida da informada.
*/


//valores	10	3	6	8	10	1	6
//�ndices	0	1	2	3	4	5	6
