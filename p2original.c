#include<stdio.h>
int input_side(int *a, int *b, int *c)
{
  printf("enter sides");
  scanf("%d%d%d",a,b,c);
}
int check_scalene(int a, int b, int c)
{
  int isscalene;
  if(a!=b&&a!=c&&b!=c)
  {
    isscalene=1;
  }
  return isscalene;
}
void output(int a, int b, int c, int isscalene)
{
if(isscalene=1)
{
 printf("triangle is scalene"); 
}
else
{
  printf("triangle not scalene");
}
  }


int main()
{
  int a,b,c,isscalene;
  input_side(&a,&b,&c);
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;

}