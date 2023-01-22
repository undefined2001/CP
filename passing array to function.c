#include<stdio.h>

void display(int x[])
{
    int i;
    for(i=0;i<5;i++){
        printf("%d ",x[i]);
    }

}

int main()
{
    int num[] = {69,59,9,5,11};
    display(num);


    return 0;
}
