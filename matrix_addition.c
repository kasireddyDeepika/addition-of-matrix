/*addition of matrices*/
#include<stdio.h>
int main()
{
int i,j;
int a[5][5],b[5][5],c[5][5];
printf("enter first matrix %d values:",(5*5));
for(i=0;i<=5;i++)
for(j=0;j<=5;j++)
scanf("%d",&a[i][j]);
printf("enter second matrix %d values:",(5*5));
for(i=0;i<=5;i++)
for(j=0;j<=5;j++)
scanf("%d",&b[i][j]);
printf("matrix addition in process");
for(i=0;i<=5;i++)
for(j=0;j<=5;j++)
c[i][j]=a[i][j]+b[i][j];
printf("\n addition of a and b is:");
for(i=0;i<=5;i++)
{
for(j=0;j<=5;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
return 0;
}
