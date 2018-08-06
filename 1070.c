#include<stdio.h>
int main()
{
    int i,n,nm=6;
    scanf("%d",&n);
    for(i=n; i<=(n+(nm*2)); i++)
    {
        if(i%2!=0)
            printf("%d\n",i);
    }
}

