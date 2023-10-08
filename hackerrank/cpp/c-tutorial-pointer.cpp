#include <stdio.h>

void update(int *a, int *b)
{
    // Complete this function
    int c = *a;
    int d = *b;
    *a = c + d;
    if (c > d)
    {
        *b = c - d;
    }
    else
    {
        *b = d - c;
    }
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}