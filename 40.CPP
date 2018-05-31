#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
 clrscr();
 char str[1000],temp;
 int l=0;
 printf("Enter the string :-  ");
 gets(str);
 for(int i=0;str[i]!='\0';++i)
  l++;
 printf("The length of string is :-  %d",l);
 getch();
}