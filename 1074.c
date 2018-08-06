#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%d",&b);
        if(b<0 && b%2!=0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if(b>0 && b%2!=0)
        {
            printf("ODD POSITIVE\n");
        }
        else if(b>0 && b%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if(b<0 && b%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if(b==0)
        {
            printf("NULL\n");
        }
    }

}
