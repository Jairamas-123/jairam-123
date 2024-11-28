#include<stdio.h>
int main(void)

{
  int n,t1=0,t2=1,nextTerm;
  printf("Enter the number of terms  ");
  scanf("%d",&n);
  printf("Fibonacci Series: ");
  for(int i=1;i<=n;i++)
    {
      nextTerm = t1+t2;
      printf(" %d ",t1);
      t1=t2;
      t2=nextTerm;
    }
printf("Pavan G");
  
  return 0;
  
}
