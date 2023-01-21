#include<stdio.h>
int main()
{
    char str[30];
    int i;
    for(i = 1; i <= 10; ++i){
        scanf("%s",str);

    if(i==3)
    puts(str);
    if(i==7)
    puts(str);
    if(i==9)
    puts(str);
   }

    return 0;
}

/*#include <stdio.h>

int main(int argc, char **argv)
{

    char string[40];

    for (int i = 1; i <= 10; ++i)
    {

        scanf("%s", string);

        if (i == 3)
            puts(string);
        else if (i == 7)
            puts(string);
        else if (i == 9)
            puts(string);

    }

    return 0;
    */
