#include<stdio.h>
int main()
{
    int i,n;
    float a,b,c,avg,avg1;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%f%f%f",&a,&b,&c);
    avg=((a*2.0)+(b*3.0)+(c*5.0));
    avg1=avg/10.0;
    printf("%.1f\n",avg1);
    }
}
