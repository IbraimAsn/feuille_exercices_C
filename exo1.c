#include <stdio.h>

int returns_ascii_value(char c)
{
    return (int)c;
}

int main()
{
    char c;
    printf("enter a char : ");
    scanf("%c",&c);   
    printf("%c : %d\n",c,returns_ascii_value(c));
    return 0;
}