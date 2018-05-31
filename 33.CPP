#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int A[10][10],B[10][10],i,j,m,n,p,q,C[10][10];
 printf("For matrix A enter :- \n");
 printf("rows :-  ");
 scanf("%d",&m);
 printf("columns :-  ");
 scanf("%d",&n);
  printf("For matrix B enter :- \n");
 printf("rows :-  ");
 scanf("%d",&p);
 printf("columns :-  ");
 scanf("%d",&q);
 if(n==p)
 {
  printf("\nEnter matrix A :- \n");
  for(i=0;i<m;++i)
  {
   for(j=0;j<n;++j)
    scanf("%d",&A[i][j]);
  }
  printf("\nEnter matrix B :- \n");
  for(i=0;i<p;++i)
  {
   for(j=0;j<q;++j)
    scanf("%d",&B[i][j]);
  }
  for(i=0;i<m;++i)
  {
   for(j=0;j<q;++j)
   {
     C[i][j]=0;
     for(int k=0;k<n;++k)
      C[i][j]+=A[i][k]*B[k][j];
   }
  }
  printf("\nProduct of two matrices AXB is:- \n");
  for(i=0;i<m;++i)
  {
   for(j=0;j<q;++j)
   {
    printf("%d",C[i][j]);
    printf("\t");
   }
   printf("\n");
  }
 }
 else
  printf("\nAXB cannot be determined!!");
 getch();
}