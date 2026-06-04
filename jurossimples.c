#include<stdio.h>
#include"function_jurossimples.c"

void main(){
    float c, tx, m;
    int t;

    printf("digite um valor\n");
    scanf("%f",& c);

    printf("digite uma taxa\n");
    scanf("%f",& tx);

    printf("digite um periodo de tempo\n");
    scanf("%d",& t);
 

   m = mon(c, tx, t);

    printf("este é o montante%.2f\n",m);
    printf("\nfeito por Benjamim messias");
}
