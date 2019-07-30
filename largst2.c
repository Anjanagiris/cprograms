#include<stdio.h>
int main()
{
int l=0,i,n,a;
printf("entr limit");
scanf("%d",&n);
printf("entr nmbr");
for(i=1;i<=n;i++)
{
scanf("%d",&a);
if(a>l)
l=a;
}
printf("\n largst nmbr= %d ",l);
}
