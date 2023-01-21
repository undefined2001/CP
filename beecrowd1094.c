/*#include<stdio.h>
int main()
{
    int a,n,i,c=0,r=0,s=0,t;
    double x,y,z;
    char m[2];
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d %c",&n,&m);
        if(m[0]=='C')c+=m;
        else if(m[0]=='R')r+=m;
        else if(m[0]=='S')s+=m;

    }
    t = c+r+s;
    x = (c/(t*1.0)*100.00);
    y = (r/(t*1.0)*100.00);
    z = (s/(t*1.0)*100.00);
    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);
    return 0;
}

*/

#include <stdio.h>
int main()
{
    int a,i,n,d=0,e=0,f=0,g;
    double x,y,z;
    char m[2];
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        scanf("%d%s",&n,&m);
        if(m[0]=='C') d+=n;
        else if(m[0]=='R') e+=n;
        else if(m[0]=='S') f+=n;
    }
    g=d+e+f;
    x=(d/(g*1.0))*100.00;
    y=(e/(g*1.0))*100.00;
    z=(f/(g*1.0))*100.00;
    printf("Total: %d cobaias\n",g);
    printf("Total de coelhos: %d\n",d);
    printf("Total de ratos: %d\n",e);
    printf("Total de sapos: %d\n",f);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);
    return 0;
}
