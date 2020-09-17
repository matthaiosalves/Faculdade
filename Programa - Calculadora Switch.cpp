#include <stdio.h>
 
int main(){
 
    char op;
    float valor1=0,valor2=0,soma=0,sub=0,multi=0,div=0;


    printf("Informe o valor 1: ");
    scanf("%f", &valor1);

    printf("Informe a operacao: ");
    scanf(" %c",&op);

    printf("Informe o valor 2: ");
    scanf("%f", &valor2);


    soma=valor1+valor2;
    sub=valor1-valor2;
    multi=valor1*valor2;
    div=valor1/valor2;

    switch(op){
        case '+':
            printf("Ad\n");
            printf("RESULTADO: %f",soma);
        break;
        
        case '-':
            printf("Sub\n");
            printf("RESULTADO: %f",sub);
        break;
        
        case '*':
            printf("Multi\n");
            printf("RESULTADO: %f",multi);
        break;
        
        case '/':
            if(div==valor1/0){
              printf("Impossivel dividir por zero:");
            }else{
              if(div==0/valor2){
                printf("Impossivel dividir por zero:");
              }else {
                printf("Div\n");
                printf("RESULTADO: %f",div);
              }

            }
            
        break;
                                
        default:
            printf("Op invalido\n");
    }
    
    return 0;
}
