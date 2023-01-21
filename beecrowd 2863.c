#include<stdio.h>
int main()
{
    int n;
    double t, minor;
    while(scanf("%d",&n)!=EOF)
    {
        minor = 11;
        while(n--)
        {
            scanf("%lf",&t);
            if(t<minor)
            {
                minor = t;
            }
        }
        printf("%.2lf",t);
    }

    return 0;
}
