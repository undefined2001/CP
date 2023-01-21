#include<stdio.h>
int main()
{
    double m[12][12],sum = 0.0;
    int n=1, i,j;
    char a[2];

    scanf("%s",&a);
    for(i=0 ; i<12 ; i++)
    {
        for(j=0;j<12;j++){
        scanf("%lf",&m[i][j]);
        }
    }
    for(i=0 ; i<12 ; i++){
        for(j=n;j<12;j++)
    {
    sum = sum + m[i][j];
    }
    n++;
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


