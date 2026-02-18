#include<stdio.h>
int main()
{
 int a;
 printf("entee a value :\n");
 scanf("%d",&a);
 if(a>0)
 {
  printf("%d is +ve \n",a);
 }
 else if(a<0)
 {
  printf("%d is -ve \n",a);
 }
 else
 {
  printf("%d is zero \n");
 }
 printf("program ended");
}