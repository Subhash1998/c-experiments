#include<stdio.h>
#include<conio.h>
struct time
{
 int hrs,min,sec;
};
void diff(time t1,time t2)
{
 time t3;
 t3.sec=(t1.sec-t2.sec)%60;
 t3.min=(t1.min-t2.min)%60+(t1.sec-t2.sec)/60;
 t3.hrs=(t1.hrs-t2.hrs)+(t1.min-t2.min)/60;
 printf("\nSum of two times is %d hours %d minutes %d seconds",t3.hrs,t3.min,t3.sec);
}
void main()
{
 clrscr();
 time t1,t2;
 printf("Enter 1st time(greter than second) :-\nHours :-  ");
 scanf("%d",&(t1.hrs));
 printf("Minutes :-  ");
 scanf("%d",&(t1.min));
 printf("Seconds :-  ");
 scanf("%d",&(t1.sec));
 printf("Enter 2nd time :-\nHours :-  ");
 scanf("%d",&(t2.hrs));
 printf("Minutes :-  ");
 scanf("%d",&(t2.min));
 printf("Seconds :-  ");
 scanf("%d",&(t2.sec));
 diff(t1,t2);
 getch();
}