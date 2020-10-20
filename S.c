#include<stdio.h>
int main()
{
int num;
printf("\n Enter a number 1 to 5:");
scanf("%d",&num);
switch(num)
{
case 1:
printf("\n One");
break;
case 2:
printf("\n Two");
break;
case 3:
printf("\n Three");
break;
case 4:
printf("\n Four");
break;
case 5:
printf("\n Five");
break;
default:
printf("Invalid ,Enter a valid number");
}
return 0;
}
