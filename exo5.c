#include <stdio.h>

double my_pow(double X, int N)
{
    int i = 0;
    double result = 1;
    while(i < N)
    {
        result = result * X;
        i++;
    }
    return result;
}

int main()
{
    int N;
    double X;
    printf("enter a floating number : ");
    scanf("%lf",&X);
    printf("enter an integer : ");
    scanf("%d",&N);
    printf("\n%0.3lf^%d = %0.3lf\n",X,N,my_pow(X,N));
    return 0;
}
