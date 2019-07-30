#include<stdio.h>

int main()

{
 int p,n,r,t,a;
 printf("enter 4 numbrs");
 scanf("%d%d%d%d",&p,&n,&r,&t);
 a=p*(1+r/n)^(n*t);
 printf("compound interest %d \n",a);

}
