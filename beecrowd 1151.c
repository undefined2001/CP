#include<stdio.h>
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    arr[0]=0;
    arr[1]=1;

    for(int i=2; i<n ; i++){
    arr[i] = arr[i-1]+arr[i-2];
    }n
    printf("0");
    for(int i=1 ; i<n ; i++){
        printf(" %d",arr[i]);

    }
    printf("\n");

    return 0;
}
