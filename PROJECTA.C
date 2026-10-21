#include<stdio.h>
#include<conio.h>
int main()
{
int pin=1103,epin,choice;
float amount,balance=5000;
clrscr();
printf("Enter the pin:");
scanf("%d",&epin);
if(epin!=pin)
{
printf("Invalid pin\n");
return 0;
}
printf("Logic success\n");
do
{
printf("\nMenu");
printf("\n1.Check balance");
printf("\n2.Withdraw");
printf("\n3.Deposited");
printf("\n4.Exit");
printf("\nEnter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
printf("Total balance=%f",balance);
break;
}
case 2:
{
printf("Enter withdraw amount:");
scanf("%f",&amount);
if(amount<=0)
{
printf("\nInvalid amount");
}
else if(amount>balance)
{
printf("\nInsufficient amount");
}
else
{
balance=balance-amount;
printf("New balance:%f",balance);
}
break;
}
case 3:
{
printf("\nEnter the deposit amount:");
scanf("%f",&amount);
if(amount>0)
{
balance+=amount;
printf("\nDeposit successful");
printf("\nTotal amount:%f",balance);
break;
}
}
case 4:
{
printf("\nThank you");
break;
}
default:
{
printf("\nInvalid choice\n");
}
}
}while(choice!=4);
getch();
return 0;
}