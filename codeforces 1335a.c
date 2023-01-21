#include<stdio.h>
int main()
{


    int t,i;
    double n;
    long long int ans;
    scanf("%d",&t);
    for(i=t;i>=0;i--)
    {
        ans=0;
        scanf("%d",&n);
        ans=ceil((n/2)-1);
        printf("%d",ans);
    }
    return 0;
}
