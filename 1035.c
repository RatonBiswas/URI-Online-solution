#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,R1,R2,d;
    scanf("%lf %lf %lf",&A,&B,&C);
    d=(B*B)-(4*A*C);
    R1=(-(B)+sqrt(d))/(2*A);
    R2=(-(B)-sqrt(d))/(2*A);
    if(A!=0&&d>0)
    printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
    else
      printf("Impossivel calcular\n");

}
