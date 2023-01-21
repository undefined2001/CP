#include<stdio.h>
int main()
{
    int n,arr[1000],min,pos;
    scanf("%d",&n);
    for(int i=0 ; i<n ;i++){

        scanf("%d",& arr[i]);
        if(i==1){
            if(arr[0]<arr[1]){
                min = arr[0];
                pos = 0;
            }
            else if(arr[0]>arr[1]){
                min = arr[1];
                pos = 1;
            }
            else{
                min = arr[0];
                pos = 0;
            }
        }


     if(i>1)
     {
         if(arr[i]<min){
            min = arr[i];
            pos = i;
         }

     }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,pos);

    return 0;
}
