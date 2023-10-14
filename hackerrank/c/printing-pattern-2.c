#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.0
    int elementsCount = (n * 2) - 1;
    int s = 0;
    int e = elementsCount - 1;
    int matrix[elementsCount][elementsCount];
    while (n != 0)
    {
        for (int i = s; i <= e; i++)
        {
            for (int j = s; j <= e; j++)
            {
                matrix[i][j] = n;
            }
        }
        s++;
        e--;
        n--;
    }

    for (int i = 0; i < elementsCount; i++)
    {
        for (int j = 0; j < elementsCount; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}