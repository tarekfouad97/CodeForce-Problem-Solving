#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    int count = 0;
    int result = 0;
    scanf("%s", str);

    int size = 26;
    int arr[size];
    for (int i = 0; i <= size; i++)
    {
        arr[i] = 0;
    }
    int temp = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        temp = str[count] - 'a';
        arr[temp]++;

        count++;
    }
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] >= 1)
        {
            result++;
        }
    }
    
    if (result % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {

        printf("IGNORE HIM!");
    }
    return 0;
}