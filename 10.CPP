#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[1000],n,f,b[1000],c[1000],k=0,temp=0;
 printf("Enter no. of elements of array : ");
 scanf("%d",&n);
 for(int i=0;i<n;++i)
  scanf("%d",&a[i]);
 for(i=0;i<n;++i)
 {
  f=1;
  for(int j=0;j<n;++j)
  {
   if(a[i]==a[j])
   {
    f++;
    b[i]=a[i];

   if(f>1)
  }
  b[k]=a[i];
  c[k]=f;
  k++;
 }
  for(i=0;i<k;++i)
  {
   for(int j=i;j<k;++j)
   {
    if(b[i]==b[j])
    temp=1;
    break;
   }
   if(temp==1)
   printf("repeated number : %d\tfrequency : %d\n",b[i],c[i]);
  }
 getch();
}
