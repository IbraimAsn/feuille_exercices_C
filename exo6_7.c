#include <stdio.h>
#include <math.h>

int returns_special_exponent(double x)
{
    int special_exponent = 0;
    while(pow(2,special_exponent+1) < x)
    {
        special_exponent++;
    }
    return special_exponent;
}

int main()
{
    double x;
    printf("give a real number > 1 : ");
    scanf("%lf",&x);
    int special_exponent = returns_special_exponent(x);
    printf("2^%d = %0.3lf < %lf\n",special_exponent,pow(2,special_exponent),x);
    return 0;
}