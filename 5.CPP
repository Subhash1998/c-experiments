#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[100],b[100],c[100],n,j=0,k=0;
 printf("Enter the no. of elements : ");
 scanf("%d",&n);
 for(int i=0;i<n;++i)
  scanf("%d",&a[i]);
 for(i=0;i<n;++i)
 {
  if(a[i]%2==0)
  {
   b[j]=a[i];
   j++;
  }
  else
  {
   c[k]=a[i];
   k++;
  }
 }
 printf("\nEven elements : \n");
 for(i=0;i<j;++i)
  printf("%d\n",b[i]);
 printf("\nOdd elements : \n");
 for(i=0;i<k;++i)
  printf("%d\n",c[i]);
 getch();
}