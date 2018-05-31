#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[1000];
 int l=0,u=0,len;
 printf("Enter the string :-  ");
 gets(a);
 len=strlen(a);
 for(int i=0;i<len;++i)
 {
  if(a[i]>=65&&a[i]<=90)
   u++;
  if(a[i]>=97&&a[i]<=122)
   l++;
 }
 printf("Total no. of uppercase characters :- %d",u);
 printf("\nTotal no. of lowercase characters :- %d",l);
 getch();
}