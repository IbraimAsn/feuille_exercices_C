#include <stdio.h>

int returns_nbr_of_special_char(FILE *filepointer, char special_char)
{
    int counter_special_char = 0;
    char current_char;
    while((current_char = fgetc(filepointer)) != EOF)
    {
        printf("%c",current_char);
        if(current_char == special_char)
        {
            counter_special_char++;
        }
    }
    return counter_special_char;
}

int error_handling(int argc)
{
    if(argc != 2)
    {
        return 1;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    if(error_handling(argc) == 1)
    {
        printf("error : wrong nbr of arguments\n");
        return 1;
    }
    FILE *filepointer = fopen(argv[1],"r");
    if(filepointer == NULL)
    {
        printf("error opening file\n");
        return 2;
    }
    printf("contents of \"%s\":\n\n",argv[1]);
    int nbr_special_char = returns_nbr_of_special_char(filepointer,'e');
    printf("\n# of '%c' = %d\n",'e',nbr_special_char);
    fclose(filepointer);
    return 0;
}