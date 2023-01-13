#include<stdio.h>
int main()
{
	int i,j,len,c=0;
	char a[100];
	gets(a);
	len=strlen(a);
	for(i=len-1,j=0;i>=0,j<len;i--,j++);
	{
		if(a[j]==a[i])
		{
			c++;
		}
	}
	if(c==((len-1)/2))
	printf("pallidrome");
	else
	printf("not a paliidrome");
	return 0;
}
