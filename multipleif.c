#include<stdio.h>

int main()

{
 int phy,chem,bio,math,comp;
 float per;
 printf("enter 5 sub marks \n");
 scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
 per=(phy+chem+bio+math+comp)/5.0;
 printf("percentage is %f \n",per);

 if (per>90)
  {
   printf("grade A");
  }
   else if(per>=80)
    {
     printf("grade B");
    }
    else if(per>=70)
     {
      printf("grade C");
     }
     else if(per>=60)
      {
       printf("grade D");
      }
      else if(per>=40)
       {
        printf("grade E");
       }
 else   
    {
     printf("failed");
    }
}
