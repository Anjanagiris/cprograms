#include<stdio.h>
int main()
{
int i,num,b,flag=0;
printf("entr nmbr");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
b= num%i;
if(b==0)
flag=1;
}
if(flag==0)
printf("nmbr is prime");
else
printf("nmbr is not prime");
}
