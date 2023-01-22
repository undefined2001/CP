#include<stdio.h>

int power(int a, int b){

int power = pow(a,b);

return power;

}

int main()
{

    int a,b;

    scanf("%d %d",&a,&b);
    int result = power(a,b);

    printf("%d",result);

    return 0;
}
