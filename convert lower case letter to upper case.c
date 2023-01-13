#include<stdio.h>

int main()
{
	int i,n;
	scanf("%d ",&n);
	char a[n];
	scanf("%s",a);
	i=0;
	while(a[i]!='\0')
	{
		a[i]=a[i]-32;
		i++;    
	}
	printf("%s",a);
	return 0;
}

