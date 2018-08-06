#include<stdio.h>
int main()
{
    int i,in=0,out=0,N,b;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b);
        if(b>=10 && b<=20)
        {
            in++;
        }
        if(b<10 || b>20)
        {
            out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
}
