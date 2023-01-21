#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);

}

int main()
{
    int m;
    scanf("%d",&m);
    int result = fact(m);
    printf("%d",result);
}

