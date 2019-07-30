#include<stdio.h>
int main()
{
int yr;
printf("entr a year");
scanf("%d",&yr);
if((yr%4==0)||(yr%100!=0)&&(yr%400==0))
printf("%d is aleap yr",yr);
else
printf("%d is not a leap yr",yr);
}
