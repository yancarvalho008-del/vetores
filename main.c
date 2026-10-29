#include <stdio.h>
#include <stdlib.h>
  int main (){
  int tam,i;
    
    
   printf("digite o tamanho do meu vetor:\n");
   scanf("%d",&tam);
   
   int vet[tam];
   
   
    for (i=0; i<tam; i++){
    printf("digite o numero %d\n",i+1);
    scanf("%d",&vet[i]);
   }
    
    printf("os %d numeros digitados foram:\n",tam);
    
    for (i=0;i<tam;i++){
      printf("numero %d\n",vet[i]);
    
    }
    return 0;
  }
    
    