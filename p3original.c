#include<stdio.h>
int input_number(int *n)
{
  printf("enter number");
  scanf("%d",n);
}
int is_composite(int n)
{
  int count=0;
  int composite;
  for(int i=1;i<n;i++)
  {
    if(n%i==0)
    {
      count=count+1;
    }
  }
  if(count>2)
  {
    composite=1;
  }
}
void output(int n, int composite)
{
  if(composite=1)
  {
    printf("number is composite");
  }
  else
  {
    printf("number is not composite");
  }
}
int main()
{
  int n, composite;
  input_number(&n);
  composite= is_composite(n);
  output(n,composite);
  return 0;
}