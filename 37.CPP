#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char str[100];
 int l,v=0,cons=0,d=0,s=0;
 printf("Enter the string :-  ");
 gets(str);
 l=strlen(str);
 for(int i=0;i<l;++i)
 {
  if(str[i]>=48&&str[i]<=57)
   d++;
  if(str[i]==' ')
   s++;
  if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
  v++;
  else
  cons++;
 }
 printf("\nvowels :- %d",v);
 printf("\ndigits :- %d",d);
 printf("\nspaces :- %d",s);
 printf("\nconsonants :- %d",cons);
 getch();
}
