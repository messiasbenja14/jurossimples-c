#include<stdio.h>
#include"function_jurossimples.c"

void main(){

    int c, tx, t;

    printf("digite um valor\n");
    scanf("%f",& c);

    printf("digite uma taxa\n");
    scanf("%f",& tx);

    printf("digite um periodo de tempo\n");
    scanf("%d",& t);
 

   m = montante(c, tx, t, j);

    printf("este é o montante\n%f",m);
    printf("\n\nfeito por Benjamim messias");
}
