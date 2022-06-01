#include <stdio.h>



int main()
{
    int n = 0;
    int magnet[100001];
    int group = 1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &magnet[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (magnet[i] != magnet[i + 1])
        {
            group++;
        }
    }
    printf("%d", group);
    return 0;
}