#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
 clrscr();
 char a[1000];
 int l,temp=0;
 printf("Enter the name : ");
 gets(a);
 l=strlen(a);
 for(int i=0;i<l;++i)
 {
  for(int j=i+1;j<l;++j)
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
 puts(a);
 getch();
}