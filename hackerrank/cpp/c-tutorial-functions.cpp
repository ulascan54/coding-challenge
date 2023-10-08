#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_two(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int max_of_three(int a, int b, int c)
{
    if (max_of_two(a, b) > c)
    {
        return max_of_two(a, b);
    }
    else
    {
        return c;
    }
}
int max_of_four(int a, int b, int c, int d)
{
    if (max_of_three(a, b, c) > d)
    {
        return max_of_three(a, b, c);
    }
    else
    {
        return d;
    }
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}