#include<stdio.h>
#include<string.h>
int main()
{ 
int i,len,j;
	char a[100];
	char b[100];
	gets(a);
	len=strlen(a);
	for(i=len-1,j=0;i>=0,j<len;i--,j++)
	{
		b[j]=a[i];
	}
	printf("%s",b);
}
