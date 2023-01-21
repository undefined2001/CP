#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,r,gas;
    double vol;
    scanf("%d %d",&r,&gas);

    a = pow(r,3);
    r =  1.333333333 * (3.1415*a);;

    int res = (gas /r);
    printf("%d\n",res);

    return 0;
}
