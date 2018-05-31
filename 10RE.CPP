#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[1000];
 int i,j,n,temp,count=1;
// printf("Enter no. of elements : ");
 //scanf("%d",&n);
// for(i=0;i<n;++i)
  //scanf("%d",&a[i]);
 gets(a);
 n=strlen(a);
 for(i=0;i<n-1;++i)
 {
  for(j=0;j<n-i-1;++j)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 for(i=0;i<n;++i)
 {
  if(a[i]!=' ')
  { if(a[i]==a[i+1])
   count++;
  else
  {
    printf("character :- %c\tFrequency :-  %d\n",a[i],count);
    count=1;
   }
 }
 }
 getch();
}