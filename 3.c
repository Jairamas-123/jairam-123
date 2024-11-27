#include <stdio.h>
int largest(int a, int b, int c)
{
if (a>=b&&a>=c)return a;
  if (b>=a&&b>=c)return b;
  return c;
}
int main(){ 
  int a,b,c;
  printf("Enter the three number: ");
  scanf("%d%d%d",&a,&b,&c);
  printf("Largest number is %d\n",largest(a,b,c));
  printf("jairam ECE");
  return 0;
}
