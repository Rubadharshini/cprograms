#include<stdio.h>
#include<conio.h>
int main()
{
double number;
printf("Enter the number");
scanf("%lf",&number);
if(number>=0)
{
printf("It is a positive number");
}
else
if(number<=0)
{
printf("It is negative number");
}
return 0;
}
