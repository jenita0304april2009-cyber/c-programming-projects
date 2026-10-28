#include<stdio.h>
#include<conio.h>
struct student
{
char name[20],city[20],dream[20];
int rollno;
int mark;
};
void read(struct student s[])
{
int i;
for(i=0;i<3;i++)
{
printf("Enter student name:");
scanf("%s",s[i].name);
printf("Enter student roll no:");
scanf("%d",s[i].rollno);
printf("Enter mark:");
scanf("%d",s[i].mark);
printf("Enter city:");
scanf("%s",s[i].city);
printf("Enter dream:");
scanf("%s",s[i].dream);
}
}
void display(struct student s[])
{
int i;
for(i=0;i<10;i++)
{
printf("\nStudent name:%s",s[i].name);
printf("\nStudent rollno:%d",s[i].rollno);
printf("\nStudent marks:%d",s[i].mark);
printf("\nStudent city:%s",s[i].city);
printf("\nStudent dream:%s",s[i].dream);
}
}
int main()
{
struct student s[10];
int i;
clrscr();
read(s);
display(s);
getch();
return 0;
}



