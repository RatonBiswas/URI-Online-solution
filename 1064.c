#include<stdio.h>
int main()
{
  float a[150],avg=0,avg1;
  int i,count=0;
  for(i=0;i<6;i++)
  {
    scanf("%f",&a[i]);
  }
  for(i=0;i<6;i++)
  {
    if(a[i]>=0)
    {
      count++;
      avg+=a[i];
    }
  }
  avg1=avg/count;
  printf("%d valores positivos\n%.1f\n",count,avg1);
}
