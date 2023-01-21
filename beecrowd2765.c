#include<stdio.h>

int main()
{
    char str[200];

    int i=0,n,j;
    scanf("%d",&n);
    for(j=0;j<=n;j++){
    gets(str);

    while(str[i]!='\0'){
        if(str[i]==','){
                str[i]=str[i]-',';
            printf("\n");
        }
        printf("%c",str[i]);
        i++;
    }
    }
    return 0;
}
