#include<stdio.h>
int main()
{
    int a,b,i;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==b||b==a)
        {
            break;
        }
        else if(a>b)
        {
            printf("Decrescente\n");
        }
        else if(a<b)
        {
            printf("Crescente\n");
        }
    }
}


