#include<stdio.h>
int main()
{
    double m[12][12],sum = 0.0;
    int n=11, i,j;
    char a[2];

    scanf("%s",&a);
    for(i=0 ; i<12 ; i++)
    {
        for(j=0;j<12;j++){
        scanf("%lf",&m[i][j]);
        }
    }
    for(i=1 ; i<=11 ; i++){
        for(j=11;j>=n;j--)
    {
    sum = sum + m[i][j];
    }
    n--;
    }
    if(a[0]=='S')
    {
        printf("%.1lf\n",sum);


    }
    else if(a[0]=='M'){
        printf("%.1lf\n",sum/66.0);
    }

    return 0;
}




