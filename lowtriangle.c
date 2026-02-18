#include <stdio.h>
void main()
{
int rows;
int colum;
printf("enter no of rows;\n");
scanf("%d",&rows);
printf("enter no of colum;\n");
scanf("%d",&colum);
for(int i=1;i<=rows;i++)
{
for(int j=1;j<=colum;j++)
{
if(j==1||i==rows||i==j||i>j)
{
printf("* ");
}
else
{
  printf("  ");
}
}
printf("\n");
}
}
