#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int a,b,count1=0,count2=0;
        while(n--)
        {
            scanf("%d %d",&a,&b);
            if(a>b)
                count1 = count1+1;
            else if(a<b)
                count2 = count2+1;
        }
        printf("%d %d\n",count1,count2);
    }

    return 0;
}

/*
#include<stdio.h>

int main()
{
    int n;

   while(scanf("%d",&n)&& n!=0){
        int x,y,c=0,c1=0;
        while(n--){
         scanf("%d %d",&x,&y);
       if(x>y){
            c++;
        }else if(x<y){
           c1++ ;
        }

        }
         printf("%d %d\n",c,c1);
    }
    return 0;
}
*/

