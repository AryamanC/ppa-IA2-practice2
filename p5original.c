#include <stdio.h>
int input(int *a,int *b)
{
    printf("enter two numbers");
    scanf("%d%d",a,b);
}
int hcf(int a, int b)
{
    int gcd=0;
    if(a>b)
    {
        for(int i=1;i<a;i++)
        {
            if(a%i==0 && b%i==0)
            {
                if(i>gcd)
                {
                    gcd=i;
                }
            }
        }
    }
    else
    {
        for(int j=1;j<b;j++)
        {
          if(a%j==0 && b%j==0)
            {
                if(j>gcd)
                {
                    gcd=j;
                }
            }  
        }
    }
    return gcd;
    
}
void output(int a, int b, int gcd)
{
    printf("the hcf is %d",gcd);
}
int main()
{
    int a,b;
    input(&a,&b);
    int gcd;
    gcd=hcf(a,b);
    output(a,b,gcd);
    return 0;
}