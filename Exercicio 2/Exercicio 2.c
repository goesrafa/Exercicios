#include <stdio.h>
#include <stdlib.h>
main (){
    int x[5], i, j,k, cont=0, repetido,aux;

    printf("Entre com os valores do vetor.\n");
    for(j=0;j<5;j++){
        printf("Vetor [%d]: ", j);
        scanf("%d", &x[j]);
    }
    printf("\n\n");
   
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(x[i]>x[j]){
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
    for(i=0;i<5;i++){
            cont=0;
        for(j=0;j<5;j++){
            if(x[i]==x[j]){
                cont++;
            }

        }
        if(cont>=2){
           printf("O numero %d aparece %d vezes!\n", x[i], cont);
        }
        else
            printf("O numero %d aparece apenas uma vez!\n", x[i]);
    }



return 0;
}