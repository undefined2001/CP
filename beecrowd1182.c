#include<stdio.h>
int main()
{
    double m[12][12],sum = 0.0;
    int n, i,j;
    char a[2];
    scanf("%d",&n);
    scanf("%s",&a);
    for(i=0 ; i<12 ; i++)
    {
        for(j=0;j<12;j++){
        scanf("%lf",&m[i][j]);
        }
    }
    for(i=0 ; i<12 ; i++)
    {
    sum = sum + m[i][n];
    }
    if(a[0]=='S')
    {
        printf("%.1lf\n",sum);


    }
    else if(a[0]=='M'){
        printf("%.1lf\n",sum/12.0);
    }

    return 0;
}

