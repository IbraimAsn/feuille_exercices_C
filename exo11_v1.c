#include <stdio.h>
#include <math.h>

void get_coefficients(int *coefficients)
{
    for(int i = 0; i < 3; i++)
    {
        printf("%c : ",97+i);
        scanf("%d",&coefficients[i]);
    }
}

void displays_equation(int *coefficients)
{
    printf("%d*x^2 + %d*x + %d = 0\n",coefficients[0],coefficients[1],coefficients[2]);
}

double returns_delta(int *coefficients)
{
    return pow(coefficients[1],2)-4*coefficients[0]*coefficients[2];
}

void gets_roots(int *coefficients, double delta, double *roots)
{
    if(delta == 0)
    {
        roots[0] = -(double)coefficients[1]/(2*(double)coefficients[0]);
    }
    else if(delta > 0)
    {
        roots[0] = (-(double)coefficients[1]-sqrt(delta))/(2*(double)coefficients[0]);
        roots[1] = (-coefficients[1]+sqrt(delta))/(2*coefficients[0]);
    }
}

void displays_roots(double delta, double *roots)
{
    if(delta < 0)
    {
        printf("Il n'y a pas de solution dans le domaine réel.");
    }
    else if(delta == 0)
    {
        printf("Il n'y a qu'une solution qui est :\nX0 = %0.4lf\n",roots[0]);
    }
    else
    {
        printf("Il y a 2 solutions qui sont :\nX1 = %0.4lf\tX0 = %0.4lf\n",roots[0],roots[1]);
    }
}

int main()
{
    int coefficients[3];
    double roots[2];
    printf("a*x^2 + b*x + c\n\n");
    get_coefficients(coefficients);
    printf("\n");
    displays_equation(coefficients);
    printf("\n");
    double delta = returns_delta(coefficients);
    printf("/\\ = %0.3lf\n",delta);
    printf("\n");
    gets_roots(coefficients,delta,roots);
    displays_roots(delta,roots);
    return 0;
}