#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,a[1000],pos,e,temp=0;
 printf("Enter no. of elements : ");
 scanf("%d",&n);
 for(int i=0;i<n;++i)
  scanf("%d",&a[i]);
 for(i=0;i<n;++i)
 {
  for(int j=i+1;j<n;++j)
  {
   if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
  }
 }
 printf("\nAfter sorting :  \n");
 for(i=0;i<n;++i)
 printf("%d\t",a[i]);
 printf("\nEnter the position where element is to be inserted :  ");
 scanf("%d",&pos);
 printf("\nEnter the element to be inserted : ");
 scanf("%d",&e);
 for(i=n;i>=pos;--i)
 {
  if(e<a[i-1])
  {
   if(n<1000)
    a[i]=a[i-1];
   }
  }
  a[i]=e;
  for(i=0;i<=n;++i)
   printf("%d\t",a[i]);
 getch();
}


