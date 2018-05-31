#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 float avg=0;
 int sum=0,a[1000],n;
 printf("Enter no. of elements : ");
 scanf("%d",&n);
 for(int i=0;i<n;++i)
 {
  scanf("%d",&a[i]);
  sum+=a[i];
 }
 avg=sum/n;
 printf("\nSum  : %d  \nAverage  :  %f",sum,avg);
 getch();
}