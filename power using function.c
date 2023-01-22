#include<stdio.h>

void calculatePower(double base, double exp)
{
    double result = 1, i;
    for(i=1;i<=exp;i++){
        result = result*base;

    }
    printf("%.1lf",result);
}

int main()
{
    double base,exp;
    scanf("%lf %lf",&base,&exp);

    calculatePower(base,exp);


    return 0;
}
