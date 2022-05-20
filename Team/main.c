/*
* https://codeforces.com/contest/231/problem/A
*/

#include <stdio.h>

int main()
{
    int Petya, Vasya, Tonya;
    int problem;
    int sum;
    int count=0;
    scanf("%d", &problem);
    int i;
    for (i = 0; i < problem; i++)
    {
        sum = 0;
        scanf("%d %d %d", &Petya, &Vasya, &Tonya);
        sum = Petya + Vasya + Tonya;

        if (sum == 3 || sum == 2)
        {
            count++;
        }
    }
    printf("%d", count);
}