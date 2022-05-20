/*
https://codeforces.com/contest/791/problem/A
*/

#include <stdio.h>

int main()
{
    int bear;
    int brother;
    int years=0; //assign it to zero

    scanf("%d", &bear);
    scanf("%d", &brother);
    while (1)
    {
        bear *= 3;
        brother *= 2;
        years++;
        if (bear > brother)
        {
            break;
        }
    }
    printf("%d",years);
}