#include<stdio.h>
#include<conio.h>
int main()
{
int sum,sub,mult,div,num1,num2,op;
printf("Enter first number:");
scanf("%d",&num1);
printf("Enter second number:");
scanf("%d",&num2);
printf("\n1.ADDITION");
printf("\n2.SUBTRECTION");
printf("\n3.MULTIPLICATION");
printf("\n4.DIVISION");
printf("\n\tYOUR CHOICE:");
scanf("%d",&op);
switch(op){
case 1:
sum=num1+num2;
printf("SUM=%d",sum);
break;
case 2:
sub=num1-num2;
printf("SUB=%d",sub);
break;
case 3:
sum=num1*num2;
printf("MULT=%d",mult);
break;
case 4:
sum=num1/num2;
printf("DIV=%d",div);
default:
printf("\n\t YOUR CHOICE IS NOT VALID ");
return 0;
}
}
