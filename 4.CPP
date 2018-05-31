#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,a[1000],max1,max2,min;
 printf("Enter the no. of elements : ");
 scanf("%d",&n);
 for(int i=0;i<n;++i)
  scanf("%d",&a[i]);
 max1=max2=min=a[0];
 for(i=1;i<n;++i)
 {
  if(a[i]>max1)
  {
   if(max1>max2)
    max2=max1;
   max1=a[i];
  }
  else
  {
   if(a[i]>max2)
    max2=a[i];
  }
  if(a[i]<min)
   min=a[i];
 }
 printf("Smallest number : %d\nSecond largest number : %d",min,max2);
 getch();
}