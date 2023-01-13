#include<stdio.h>
int main()
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
	int *p=&a;
	int *q=&b;
	int *x;
	*x=*p;
	*p=*q;
	*q=*x;
	printf("%d%d",*p,*q);
	return 0;
}
