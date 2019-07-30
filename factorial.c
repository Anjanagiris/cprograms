#include<stdio.h>
#include<math.h>

int main()
{
 int fact=1,num,c=1,i;
 printf("\n Enter a nmbr");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
  {
   fact*=c;
   c++;
  }
 printf("\n factorial is = %d",fact);
}
