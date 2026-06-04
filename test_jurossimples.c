#include <stdio.h>
#include <assert.h>
#include "function_jurossimples.c"

int main()
{
    assert(mon(100, 50, 10) == 600);
    assert(mon(100, 25, 12) == 400);
    assert(mon(100, 75, 5) == 475);

    printf("teste executado com sucesso!");

    return 0;
}
