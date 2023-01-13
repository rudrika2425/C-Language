#include<stdio.h>
int main()
{
	int i,n,ascii;
	scanf("%d ",&n);
	char a[n];
	char c[n];
	scanf("%s",a);
	i=0;
	while(a[i]!='\0')
	{
		ascii=a[i];
		if (ascii>96)
		{
		c[i]=a[i]-32;
		i++; 
	}
	else
	{
		c[i]=a[i]+32;
		i++;
	}
	}
	printf("%s",c);
    
	return 0;
}

