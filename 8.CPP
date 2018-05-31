#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,a[1000],temp=0;
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
 getch();
}