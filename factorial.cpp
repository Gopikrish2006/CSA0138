#include <stdio.h>
int fact(int);
main()
{
  int n;
  printf("eneter number ::\n");
  scanf("%d",&n);
  int r=fact(n);
  printf("factorial of %d is %d ",n,r);
}
int fact(int n)
{
  if(n>1)
  return n*fact(n-1);
  else
  return 1;
}
