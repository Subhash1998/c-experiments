#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int A[10][10],B[10][10],i,j,n;
 printf("Enter the no. of rows/columns for square matrix :-  ");
 scanf("%d",&n);
 printf("\nEnter the first array :-  \n");
 for(i=0;i<n;++i)
 {
  for(j=0;j<n;++j)
   scanf("%d",&A[i][j]);
 }
 printf("Enter the second array :-  \n");
 for(i=0;i<n;++i)
 {
  for(j=0;j<n;++j)
   scanf("%d",&B[i][j]);
 }
 for(i=0;i<n;++i)
 {
  for(j=0;j<n;++j)
   printf("%d  ",A[i][j]+B[i][j]);
  printf("\n");
 }
 getch();
}