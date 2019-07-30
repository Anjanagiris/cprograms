#include<stdio.h>

int main()

{

 int i,n;
 float sum=0,avg;
 printf("\n enter the limit");
 scanf("%d\n",&n);
for(i=1;i<=n;i++)
  {
   sum=sum+i;
  }
printf("sum is %f",sum);
 printf("\n sum of first %d numbrs is %f",n,sum);
 avg=sum/n;
 printf("\n avg of first %d numbrs is %f",n,avg);
}
