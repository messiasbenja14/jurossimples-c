#include <stdio.h>
#include <assert.h>
#include "function_jurossimples.c"

void main()
{
    assert(m(100, 0.5, 10) == 500);
    assert(m(100, 0.25, 12) == 300);
    assert(m(100, 0.75, 5) == 375);

    printf("teste executado com sucesso!");
}
