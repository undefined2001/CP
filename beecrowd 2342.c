#include<stdio.h>
int main()
{

    int n,a,b;
    char ch;
    scanf("%d",&n);
    scanf("%d %c %d",&a,&ch,&b);

    if(ch=='+'){
        if(a+b<=n){
            printf("OK\n");
        }
            else if (a+b>n){
                printf("OVERFLOW\n");
            }
    }

        else if(ch=='*'){
            if(a*b<=n){
            printf("OK\n");
            }
            else if (a*b>n){
                printf("OVERFLOW\n");
            }

        }


    return 0;
}
