#include <stdio.h>
#include <conio.h>

main()
{
 int celius;
 float F;
 clrscr();
 printf("convert temperature to degrees celsius:-");
 scanf("%d",&celius);
 F=(celius*9/5)+32;
 printf("%f",F);
 getch();

}