#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[1000],n,e,pos=0;
 printf("Enter no. of elements  :  ");
 scanf("%d",&n);
 for(int i=0;i<n;++i)
  scanf("%d",&a[i]);
 printf("\nEnter the element to be deleted : ");
 scanf("%d",&e);
 for(i=0;i<n;++i)
 {
  if(e==a[i])
  {
   a[i]=0;
   pos=i;
   break;
  }
 }
 for(i=pos;i<n-1;++i)
  a[i]=a[i+1];
 for(i=0;i<n-1;++i)
  printf("%d\t",a[i]);
 getch();
}
