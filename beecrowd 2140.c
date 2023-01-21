#include<stdio.h>
int main()
{
    int n,m,ret;
    int a=2,b=5,c=10,d=20,e=50,f=100;
    scanf("%d %d",&n,&m);
    ret = m - n;
    while(1)
    {
        if(a+b==ret || a+c==ret || a+d==ret || a+e==ret || a+f==ret || b+c==ret || b+d==ret || b+e==ret || b+f==ret|| c+d==ret || c+e==ret || c+f==ret || d+e==ret || d+f==ret || e+f==ret)
        {
            printf("possible");
        }
        else if(m==0 && n==0)break;
        else
            printf("impossible");
    }

    return 0;
}
