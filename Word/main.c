#include <stdio.h>
#include <string.h>
int main()
{
    int UPPER = 0, lower = 0;
    char str[200];
    scanf("%s", str);
    int i = 0;
    while (i != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            UPPER++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            lower++;
        }
    }

    if (UPPER > lower)
    {
        for (int i = 0; str[i]!='\0'; i++)
        {
            if (str[i] <= 92)
            {
                str[i] -= 32;
            }
        }
    }
    else
    {
        for (int i = 0; str[i]!='\0'; i++)
        {
            if (str[i] < 92)
            {
                str[i] += 32;
            }
        }
    }
    printf("%s",str);
    return 0;
}