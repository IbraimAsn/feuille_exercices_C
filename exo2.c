#include <stdio.h>
#include <math.h>

//%0.4f displays 4 digits after the dot without rounding up or down

void displays_values_requested(int my_int)
{
    printf("racine(%d) = %0.4f\n",my_int,sqrt(my_int));
    printf("exp(%d) = %0.4f\n",my_int,exp(my_int));
}

int main()
{
    int my_int;
    printf("enter an integer : ");
    scanf("%d",&my_int);
    displays_values_requested(my_int);
    return 0;
}