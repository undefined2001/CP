#include<stdio.h>
int sum(int a, int b)
{
    int sum;

     sum = a+b;
     return sum;

}

int sqr (int a)
{
    int sqr = a*a;

    return sqr;

}

int main()
{
    int num1,num2,num3;
    scanf("%d %d",&num1,&num2);
    scanf("%d",&num3);

    int resultSum = sum(num1,num2);
    int resultSqr = sqr(num3);
    printf("Sum of %d & %d = %d\n",num1,num2,resultSum);

    printf("Square of %d = %d",num3,resultSqr);

    return 0;

}
