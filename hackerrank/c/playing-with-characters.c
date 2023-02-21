#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    char name;
    char type[50];
    char message[50];
    scanf("%c \n %s\n %[^\n]%*c",&name,&type,&message);
    printf("%c\n%s\n%s",name,type,message);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
