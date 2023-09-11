#include<stdio.h>
#include<math.h>
int main()
{
 float Area,Peri,len,wid;
 printf("Enter the length of the rectangle");
 scanf("%f",&len);
 printf("Enter the width of the rectangle");
 scanf("%f",&wid);
 Area=len*wid;
 Peri=2*(len+wid);
 printf("The are of rectangle=%f",Area);
 printf("The perimeter of rectangle=%f",Peri);
 return(0);
 }
 
