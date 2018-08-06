#include<stdio.h>
int main()
{
    int s1,e1,s2,e2,g,c;
    scanf("%d %d %d %d",&s1,&s2,&e1,&e2);
    c=e1-s1;
    if(c<0)
    {
        c=24+(e1-s1);
    }
    g=e2-s2;
    if(g<0)
    {
        g=60+(e2-s2);
        c--;
    }

    if(s1==e1&&s2==e2)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,g);
}

