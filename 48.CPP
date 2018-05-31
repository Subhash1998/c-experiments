#include<stdio.h>
#include<conio.h>
struct distance
{
 int feet,inch;
};
void add(distance d1,distance d2)
{
 distance d3;
 d3.inch=(d1.inch+d2.inch)%12;
 d3.feet=(d1.feet+d2.feet)+(d1.inch+d2.inch)/12;
 printf("\nSum of two distances is %d feets %d inches",d3.feet,d3.inch);
}
void main()
{
 clrscr();
 distance d1,d2;
 printf("Enter 1st distance :-\nFeets :-  ");
 scanf("%d",&(d1.feet));
 printf("Inches :-  ");
 scanf("%d",&(d1.inch));
 printf("Enter 2nd distance :-\nFeets :-  ");
 scanf("%d",&(d2.feet));
 printf("Inches :-  ");
 scanf("%d",&(d2.inch));
 add(d1,d2);
 getch();
}
