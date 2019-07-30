#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,root1,root2,f;
printf("entr coeff");
scanf("%f%f%f%f",&a,&b,&c,&d);
d=(b*b)-4*a*c;
if(d<0)
printf("roots are img");
else if(d==0)
{
printf("\n roots are eql");
f=b/(2*a);
printf("\n %f",f);
}
else
{
printf("\n roots are real & distinct");
root1=(-b + sqrt(d))/2*a;
root2=(-b - sqrt(d))/2*a;
printf("\n roots = %f%f",root1,root2);
}
}
