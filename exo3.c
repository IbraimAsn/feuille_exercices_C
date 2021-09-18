#include <stdio.h>

int error_handling(int my_int)
{
    if(my_int < 0 || my_int > 127)
    {
        return 1;
    }
    return 0;
}

void prints_corresponding_character(int my_int)
{
    printf("%d : %c\n",my_int,(char)my_int);
}

int main()
{
    int my_int;
    printf("give an integer in [0,127] : ");
    scanf("%d",&my_int);
    while(error_handling(my_int) != 0)
    {
        printf("/!\\ give an integer in [0,127] : ");
        scanf("%d",&my_int);
    }
    prints_corresponding_character(my_int);
    return 0;
}