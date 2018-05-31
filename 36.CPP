#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char str[100],temp;
 int i,j,count;
 printf("Enter the string :-  ");
 gets(str);
 for(i=0;i<strlen(str);++i)
 {
  for(j=0;j<strlen(str)-1;++j)
  {
   if(str[j]>str[j+1])
   {
    temp=str[j];
    str[j]=str[j+1];
    str[j+1]=temp;
   }
  }
 }
 puts(str);
 for(i=0;i<strlen(str)-1;)
 {
  count=1;
  temp=str[i];
  for(j=i+1;j<strlen(str);++j)
  {
   if(temp!=str[j])
   {
    break;
   }
   count++;
  }
  printf("\nfrequency of %c is :- %d",str[i],count);
  i+=count;
 }
 getch();
 }