#include<stdio.h>

int mon (float c, float tx, int t)
{
    float j;
    
    j = c * (tx / 100) * t;
    return c + j;
}
