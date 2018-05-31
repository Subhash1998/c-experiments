#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[1000];
 int l,f=1;
 printf("Enter the string :- ");
 gets(a);
 l=strlen(a);
 for(int i=0;i<l/2;++i)
 {
  if(a[i]!=a[l-i-1])
  {
   f=0;
   break;
  }
 }
 if(f==0)
  printf("\nString is not a palindrome");
 else
   printf("\nString is a palindrome");
 getch();
}