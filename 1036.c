#include<stdio.h>
#include <math.h>

int main()
{
 double a, b, c, t;
 scanf("%lf %lf %lf", &a, &b, &c);

 if(((b * b) - 4 * a * c) < 0 || a == 0){
     printf("Impossivel calcular\n");
 }
 else{
  t = sqrt((b * b) - 4 * a * c);
  double res1,res2;
  res1 = ((-b + t) / (2 * a));
  res2 = ((-b - t) / (2 * a));
  printf("R1 = %.5lf\nR2 = %.5lf\n",res1,res2 );
    }
 return 0;
}
