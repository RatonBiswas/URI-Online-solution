#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c||b>=c&&b>=a||c>=a&&c>=b)
    {
        printf("%d\n%d\n%d\n%d\n%d\n%d\n",c,b,a,a,b,c);
    }
    else if(b<=c&&b>=a||c>=a&&c<=b||a>=b||a>=c)
    {
        printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,c,a,a,b,c);
    }

}
