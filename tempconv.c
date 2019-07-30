#include<stdio.h>

int main()

{
 int ch;
 float f,c;
 printf("\n\t MENU");
 printf("\n1. cel to far");
 printf("\n2. far to cel");
 printf("enter  ur choice (1 or 2)");
 scanf("%d",&ch);
 if(ch==1)
  {
   printf("Enter temp in cel");
   scanf("%f",&c);
   f=((91.8*c)+32);
   printf("\n the temp in far is %f",f);
  }
 else if(ch==2)
  {
   printf("enter temp in far");
   scanf("%f",&f);
   c=(f-32)/1.8;
   printf("\n the temp in cel is %f",c);
  }
 else
  {
   printf("\n wrong");
  }
}
