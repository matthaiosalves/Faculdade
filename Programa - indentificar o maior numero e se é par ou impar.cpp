#include <stdio.h>
 
int main(){
  int n1, n2;

  printf("Informe o 1o numero: ");
  scanf("%d",&n1);

  printf("Informe o 2o numero: ");
  scanf("%d",&n2);


  if(n1>n2){
    printf("%d e maior",n1);
    if(n1%2==0){  //Se for impar !=//
      printf("\ne esse numero e par:");
    }else{
      printf("\ne esse numero e impar:");
    }
  }else{
    if(n1<n2){
      printf("%d e maior",n2);
      if(n1%2==0){
      printf("\ne esse numero e par:");
    }else{
      printf("\ne esse numero e impar:");
    }
    }else {
      printf("Os numeros sao iguais:");
    }

  }

  return 0;
} 
