#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
 clrscr();
 char str[1000],temp;
 int l;
 printf("Enter the string :-  ");
 gets(str);
 l=strlen(str);
 for(int i=0;i<l/2;++i)
 {
  temp=str[i];
  str[i]=str[l-i-1];
  str[l-i-1]=temp;
 }
 printf("The string after reversing is :-  ");
 puts(str);
 getch();
}