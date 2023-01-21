#include<stdio.h>
int main()
{
    double m[12][12],sum = 0.0;
    int n, i,j,t=1,s=10;
    char a[2];

    scanf("%s",&a);
    for(i=0 ; i<12 ; i++)
    {
        for(j=0;j<12;j++){
        scanf("%lf",&m[i][j]);
        }
    }
    for(i=11 ; i>6 ; i--){
        for(j=t;j<=s;j++){
              sum = sum + m[j][i];

        }
    t++;
    s--;
    }


    if(a[0]=='S')
    {
        printf("%.1lf\n",sum);


    }
    else if(a[0]=='M'){
        printf("%.1lf\n",sum/30.0);
    }

    return 0;
}


