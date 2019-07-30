#include<stdio.h>

int main()

{
 float km,m,cm,inch,feet;
 printf("in km");
 scanf("%f",&km);
 m=km*1000;
 cm=m*100;
 inch=cm/2.54;
 feet=inch/12;

printf("\n meter=%.2f",m);
printf("\n cm=%.2f",cm);
printf("\n inch=%.2f",inch);
printf("\n feet=%.2f",feet);

}
