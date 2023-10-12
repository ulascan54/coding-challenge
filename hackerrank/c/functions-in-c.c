#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_two(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int max_of_three(int a, int b, int c)
{
    if (c > max_of_two(a, b))
        return c;
    else
        return max_of_two(a, b);
}
int max_of_four(int a, int b, int c, int d)
{
    if (a > max_of_three(b, c, d))
    {
        return a;
    }
    else
        return max_of_three(b, c, d);
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
