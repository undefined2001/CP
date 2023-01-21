#include<stdio.h>
int main()
{
    int n,m,i,j,a=0,b=0,count =0;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[n][m]);
        }
    }

    for(i=1;i<n-1;i++){
        for(j=1;j<m-1;j++){
            if(arr[i][j]==42){
                if(arr[i-1][j-1]==7 && arr[i-1][j]==7 && arr[i-1][j+1]==7){
                    if(arr[i][j-1]==7 && arr[i][j+1]==7){
                        if(arr[i+1][j-1]==7 && arr[i+1][j]==7 && arr[i+1][j+1]){
                            count = 1;
                            a = i+1;
                            b = j+1;
                        }
                    }
                }
            }
        }
    }

    printf("%d %d\n",a,b);

    return 0;
}


#include <stdio.h>
int main()
{
    int rw, clm, i, j, cndtn = 0, n = 0, m = 0;
    scanf("%d%d", &rw, &clm);
    int ara[rw][clm];
    for(i=0; i<rw; i++)
        for(j=0; j<clm; j++)
            scanf("%d", &ara[i][j]);

    for(i=1; i<rw-1; i++)
    {
        for(j=1; j<clm-1; j++)
        {
            if(ara[i][j]==42)
                if(ara[i-1][j-1]==7 && ara[i-1][j]==7 && ara[i-1][j+1]==7)
                    if(ara[i][j-1]==7 && ara[i][j+1]==7)
                        if(ara[i+1][j-1]==7 && ara[i+1][j]==7 && ara[i+1][j+1]==7)
                        {
                            cndtn = 1;
                            n = i+1;
                            m = j+1;
                        }
        }
    }
    printf("%d %d\n", n, m);
    return 0;
}
