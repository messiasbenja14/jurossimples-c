#include<stdio.h>
#include"function_jurossimples.c"

void main(){

    int c, tx, t, m;

    printf("digite um valor\n");
    scanf("%d",& c);

    printf("digite uma taxa\n");
    scanf("%d",& tx);

    printf("digite um periodo de tempo\n");
    scanf("%d",& t);
 

   m = mon(c, tx, t);

    printf("este é o montante\n%d",m);
    printf("\nfeito por Benjamim messias");
}
