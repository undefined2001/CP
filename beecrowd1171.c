#include<stdio.h>
int main()
{
    int i,x,n,count[2000];
    for(i=0;i<=2000;i++){
        count[i]=0;
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        count[x]++;
    }
    for(i=0;i<=2000;i++){
        if(count[i]>0){
            printf("%d aparece %d vez(es)\n",i,count[i]);
        }
    }

    return 0;
}
