#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to calculate the sum of the five digits on n.
    int total = 0;
    for (int i = n; i > 0; i /= 10)
    {
        total += i % 10;
    }
    printf("%d", total);
    return 0;
}