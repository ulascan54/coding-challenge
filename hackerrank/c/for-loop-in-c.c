#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char numbers[9][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int a, b;
    scanf("%d\n%d", &a, &b);

    for (int i = a - 1; i < b; i++)
    {
        if (i >= 9)
        {
            if (i % 2 != 0)
                printf("even\n");
            else
                printf("odd\n");
        }
        else
        {
            printf("%s\n", numbers[i]);
        }
    }

    return 0;
}
