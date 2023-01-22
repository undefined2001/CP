#include<stdio.h>
double triangleArea(double base, double hieght);
int main()
{
    double base,hieght;
    scanf("%d %d",&base,&hieght);


    double area = triangleArea(base,hieght);
    printf("%.lf",area);


}
double triangleArea(double base, double hieght)
{
return 0.5*base*hieght;
}
