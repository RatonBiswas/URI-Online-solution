#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    int j[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&j[i]);
    }
    for(i=0;i<N;i++)
    {
        if(j[i]==0)
        {
            printf("NULL\n");
        }
        if(j[i]<0 && j[i]%2==0)
        {
            printf("EVEN NEGATIVE\n");
        }
        if(j[i]>0 && j[i]%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        if(j[i]>0 && j[i]%2!=0)
        {
            printf("ODD POSITIVE\n");
        }
        if(j[i]<0 && j[i]%2!=0)
        {
            printf("ODD NEGATIVE\n");
        }
    }
}
