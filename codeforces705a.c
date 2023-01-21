#include<stdio.h>
int main()
{

    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
         if (i % 2 == 0) {
            printf("I hate ");
        } else {
            printf("I love ");
        }
        if (i != a - 1) {
            printf("that ");
        } else {
            printf("it ");
        }

    }

    return 0;
}
