#include<stdio.h>
int main()
{
    int m,n,res;
    while(1)
    {
        scanf("%d %d",&m,&n);
        if(m==0 && n==0)break;
        else
        {
            res = m*n;
            printf("%d\n",res);

        }

    }

    return 0;
}
