#include<stdio.h>
int main()
{
    float a,b,c,Area,Perimetro;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        Perimetro=(a+b+c);
        printf("Perimetro = %.1f\n",Perimetro);
    }
    else
    {
        Area=((a+b)/2.0)*c;
        printf("Area = %.1f\n",Area);
    }
}

