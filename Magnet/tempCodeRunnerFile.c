#include <stdio.h>
#define OK 1
#define NOK 0
int main()
{
    int n = 0;
    int magnet[100];
    int group = 0;
    int flag = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &magnet[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (magnet[i] == magnet[i + 1] && Flag == OK)
        {
            group++;
            flag = NOK;
        }
        else if (magnet[i] != magnet[i + 1])
        {
            flag = ok;
        }
    }
    return 0;
}