#include<stdio.h>
int main()
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
	int *p=&a;
	int *q=&b;
	sum=*p+*q;
	printf("%d",sum);
	return 0;
}
