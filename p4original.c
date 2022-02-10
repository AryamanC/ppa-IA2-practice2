  #include <stdio.h>
int input_array_size()
{
	int n;
	printf("enter size of array");
	scanf("%d",&n);
	return n;
}
int input_array(int n, int a[n])
{
	for (int i=0;i<n;i++)
	{
		printf("enter array element");
		scanf("%d",&a[i]);
	}
	return a[n];
}
int sum_composite(int n,int a[n])
{
	int sum=0;
	for(int j=0;j<n;j++)
	{
		int count=0;
		for(int k=1;k<a[j];k++)
		{
			if(a[j]%k==0)
			{
				count+=1;
			}
		}
		if(count>2)
		{
			sum+=a[j];
			
		}
	}
	return sum;
}
void output(int sum)
{
	printf("sum of composite numbers is:%d",sum);
}
int main()
{
	int n,sum;
	n=input_array_size();
	int a[n];
	input_array(n,a);
	sum= sum_composite(n,a);
	output(sum);
	return 0;
}  