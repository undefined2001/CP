#include<stdio.h>
int main()
{

    int arr[100],even[100],odd[100];


    for(int i = 0; i<15 ;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
        printf("par[%d] = %d\n",i,arr[i]);

        else if(arr[i]%2!=0)
        printf("impar[%d] = %d\n",i,arr[i]);

    }
    return 0;
}
