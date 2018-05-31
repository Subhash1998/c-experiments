#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
 clrscr();
 char str1[2000],str2[1000],temp;
 int l,j=0;
 printf("Enter the string 1 :-  ");
 gets(str1);
 printf("Enter the string 2 :-  ");
 gets(str2);
 l=strlen(str1);
 str1[l]=' ';
 for(int i=l+1;str2[j]!='\0';++i)
 {
  str1[i]=str2[j];
  j++;
 }
 printf("The string after concatenation is :-  ");
 puts(str1);
 getch();
}