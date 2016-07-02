#include<stdio.h>
#include<conio.h>
void main()
{
int d,m,y;
printf("enter the d-m-y\n");
scanf("%d%d%d",&d,&m,&y);
switch(m)
{
case 1:
printf("Jan");
break;
case 2:
printf("feb");
break;
case 3:
printf("mar");
break;
case 4:
printf("apl");
break;
case 5:
printf("may");
break;
case 6:
printf("jun");
break;
case 7:
printf("july");
break;
case 8:
printf("aug");
break;
case 9:
printf("sep");
break;
case 10:
printf("oct");
break;
case 11:
printf("nov");
break;
case 12:
printf("dec");
break;
}
getch();
}
