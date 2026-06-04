#include<stdio.h>

int mon (int c, int tx, int t)
{
    int j;
    
    j = c * (tx / 100) * t;
    return c + j;
}
