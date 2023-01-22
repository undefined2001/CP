#include<stdio.h>

int findMax(int a,int b,int c)
{


    if(a>b && b>c)
        return a;
    else if(b>a && b>c)
        return b;
    else return c;
}

int main()
{
    int n1,n2,n3,ans;
    scanf("%d %d %d",&n1,&n2,&n3);
    ans = findMax(n1,n2,n3);
    printf("%d",ans);

}
