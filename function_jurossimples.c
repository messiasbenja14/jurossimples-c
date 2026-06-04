#include<stdio.h>

int mon (int c, int tx, int t, int m);
{
    int j;
    
    j = c * (tx / 100) * t;
    m = c + j;
    return m;
}
