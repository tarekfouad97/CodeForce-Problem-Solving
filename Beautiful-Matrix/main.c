/*
 https://codeforces.com/contest/263/problem/A
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matrix[5][5];
    int i, j;
    int i_location=0;
    int j_location=0;
    int result=0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {

            scanf("%d ", &matrix[i][j]);
        }
    }
    if (matrix[2][2] == 1)
    {
        printf("0");
        return 0;
    }
    else
    {
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if(matrix[i][j] == 1){
                    
                    i_location=3-(i+1);
                    j_location=3-(j+1);
                    result= abs(i_location)+abs(j_location);
                    printf("%d",result);
                    break;
                }
            }
        }
    }
    return 0;
}