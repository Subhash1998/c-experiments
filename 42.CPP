#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[1000];
 int l;
 printf("Enter the string :- ");
 gets(a);
 l=strlen(a);
 for(int i=0;i<l;++i)
 {
  if(!((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)))
  {
   a[i]=0;
   for(int j=i;j<l-1;++j)
     a[j]=a[j+1];
   a[j]='\0';
   l--;
   i--;
  }
 }
 printf("String after removing all characters except alphabet is :- \n");
 puts(a);
 getch();
}