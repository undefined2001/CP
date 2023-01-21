#include<stdio.h>
int main()
{
    int pass = 2002;
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==pass)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
    }

    return 0;
}

