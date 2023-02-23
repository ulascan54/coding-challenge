#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,m;
    float x,c;
    
	scanf("%d %d \n%f %f", &n, &m, &x, &c);
    printf("%d %d \n%.1f %.1f",(n+m),(n-m),(x+c),(x-c));
    
    return 0;
}
