#include<stdio.h>

int main()

{
 int i,n,a=0,b=1,c=0;
 printf("entr the limit");
 scanf("%d",&n);
 printf("fibi series ");
 if(n==1)
 printf("%d%d",a,b);
 for(i=1;i<n-1;i++)
 {
 c=a+b;
 a=b;
 b=c;
 printf("%d",c);
 }
}
