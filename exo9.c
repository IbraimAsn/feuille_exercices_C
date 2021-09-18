#include <stdio.h>
#include <time.h>

void tells_if_leap_year(int annee, int current_year)
{
    printf("%d ",annee);
    if((annee % 4 == 0 && annee % 100 != 0) || (annee % 100 == 0))
    {
        if(annee < current_year)
        {
            printf("was ");
        }
        else if(annee == current_year)
        {
            printf("is ");
        }
        else
        {
            printf("will be ");
        }
        printf("a leap year\n");
    }
    else
    {
        if(annee < current_year)
        {
            printf("wasn't ");
        }
        else if(annee == current_year)
        {
            printf("isn't ");
        }
        else
        {
            printf("won't be ");
        }
        printf("a leap year\n");
    }
}

int main()
{
    int annee;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int current_year = tm.tm_year + 1900;
    printf("give a year : ");
    scanf("%d",&annee);
    tells_if_leap_year(annee,current_year);
    return 0;
}