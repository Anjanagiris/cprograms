#include<stdio.h>

int main()

{
 int i,n,sum=0;
 printf("enter n");
 scanf("%d",&n);
 for(i=1;i<=n;i=i+2)
 {
  sum=sum+i;
  printf("%d",i);
 }
 printf("sum of odd nmbrs %d \n",sum);
}
