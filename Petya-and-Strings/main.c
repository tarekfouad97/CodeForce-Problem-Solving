#include <stdio.h>
#include <string.h>
int main()
{

    char x[100];
    char y[100];

    scanf("%s", x);
    scanf("%s", y);

    for (int i = 0; i < strlen(x); i++)
    {
        if (x[i] < 92)
        {
            x[i] += 32;
        }
        if (y[i] < 92)
        {
            y[i] += 32;
        }
    }

    int count = 0;
    while (x[count] != '\0' && y[count] != '\0')
    {

        if (x[count] > y[count])
        {
            printf("1");
            return 0;
        }
        else if (x[count] < y[count])
        {
            printf("-1");
            return 0;
        }
    
        count++;
    }
    printf("0");
    return 0;
}