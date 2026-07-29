#include <stdio.h>
#include <stdlib.h>
#include "function_jurossimples.c"

int main(int argc, char *argv[]) {
    float c = 0.0f;
    float tx = 0.0f;
    int t = 0;
    float m = 0.0f;

    if (argc >= 4) {
        c = atof(argv[1]);  
        tx = atof(argv[2]); 
        t = atoi(argv[3]);  
    } else {
        printf("digite um valor\n");
        scanf("%f", &c);

        printf("digite uma taxa\n");
        scanf("%f", &tx);

        printf("digite um periodo de tempo\n");
        scanf("%d", &t);
    }

    m = mon(c, tx, t);

    printf("este é o montante %.2f\n", m);
    printf("feito por Benjamim messias\n");

    FILE *arquivo = fopen("jurossimples.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "este é o montante %.2f\n", m);
        fprintf(arquivo, "feito por Benjamim messias\n");
        fclose(arquivo);
    } else {
        printf("Erro ao criar o arquivo jurossimples.txt\n");
    }

    return 0;
}
