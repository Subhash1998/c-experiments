#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 char a[1000];
 printf("Enter no. of values in array :  ");
 scanf("%d",&n);
 for(int i=0;i<n;++i)
  scanf("%s",&a[i]);
 for(i=n-1;i>=0;--i)
  printf("%c\n",a[i]);
 getch();
}
