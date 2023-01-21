#include<stdio.h>
int main()
{
    int n, a, b;
    scanf("%d",&n);
    if(n%2!=0 || ){

    b = n%10;
     while(n >= 10)
    {
        n = n / 10;
    }
    a = n;
    if(a%2!=0 && b%2!=0)
        printf("Super\n");
    else
        printf("Primo\n");

    }
    else
        printf("Nada\n");
    return 0;
}
