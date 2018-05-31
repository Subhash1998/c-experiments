#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char str1[100] ,str2[100],ans='n';
 int pos[100],c=0,i,j;
 printf("Enter string 1 :-  ");
 gets(str1);
 printf("\nEnter string 2 :-  ");
 gets(str2);
 for(i=0;i<strlen(str1);++i)
 {
   if(str1[i]==str2[0])
   {
    c++;
    pos[c]=i;
   }
 }
 for(j=0,i=pos[j];j<c;)
 {
  for(int k=1;k<=strlen(str2);++k)
  {
   if(str1[i+k+1]!=str2[k])
    break;
  }
  if(k>strlen(str2))
  {
   ans='y';
   break;
  }
  j++;
  i=pos[j];
 }
 if(ans=='y')
  printf("\nIts a substring");
 else
  printf("\nIts not a substring");
 getch();
}
