#include<stdio.h>
void input(float *base,float *height)
{
	printf("enter base\n");
	scanf("%f",base);
	printf("enter height\n");
	scanf("%f",height);
}

void find_area(float base, float height, float *area)
{
	*area=((base*height))/2;
}
void output(float base , float height, float area)
{
	printf("area of base %f an height %f triangle is %f \n",base, height, area);
}
int main()
{
	float base,height;
	input(&base,&height);
	float area;
	find_area(base,height,&area);
	output(base,height,area);
  return 0;
}