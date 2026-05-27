#include<stdio.h>
#include"function_jurossimples.c"

int main(){

    float c, tx, m;
    int tempo;

    printf("digite um valor\n");
    scanf("%f",& c);

    printf("digite uma taxa\n");
    scanf("%f",& tx);

    printf("digite um periodo de tempo\n");
    scanf("%d",& tempo);
 

   m = montante(c, tx, tempo);

    printf("este é o montante\n%f",m);
    printf("\n\nfeito por Benjamim messias");

    return 0;
}