#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);

}

int main()
{
    int a;
    scanf("%d",&a);
    int ans = fact(a);
    printf("%d",ans);

    return 0;
}
