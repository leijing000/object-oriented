#include<stdio.h>
#include<math.h>
int c[1000000]={0};
int main()
{
	int a,b,sum,d=0,j=0,n;
	scanf("%d %d",&a,&b);
	sum=a+b;
	n=abs(sum);
	if(n==0)
		printf("0\n");
	else if(n>0)
	{
	while(n>0)
	{
		c[j]=n%10;
		n=n/10;
		j++;
		d++;
	}
	if(sum>0)
	{
	for(j=d-1;j>=0;j--)
		{
			printf("%d",c[j]);
		if(j%3==0&&j!=0)
			printf(",");
	}
		printf("\n");
	}
	else
	{
		printf("-");
		for(j=d-1;j>=0;j--)
		{
			printf("%d",c[j]);
		if(j%3==0&&j!=0)
			printf(",");
	}
		printf("\n");
	}
	}
	return 0;
}