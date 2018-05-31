#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[1000];
 int l;
 printf("Enter the string :-  ");
 gets(a);
 l=strlen(a);
 for(int i=0;i<l;++i)
 {
  if(a[i]>=65&&a[i]<=90)
   a[i]+=32;
  else
  {
   if(a[i]>=97&&a[i]<=122)
    a[i]-=32;
  }
 }
 printf("The string now becomes :- ");
 puts(a);
 getch();
}