#include<stdio.h>

int maximum(int x[])
{
    int i;
    int max = x[0];
    for(i=0;i<5;i++){
        if(max<x[i]){
            x[i]=max;
        }
    }
return max;
}

int main()
{
    int num[] = {69,59,9,5,11};
    int res = maximum(num);
    printf("%d",res);

    return 0;
}
