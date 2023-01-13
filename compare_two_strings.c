#include<stdio.h>
int main()
{
	int i,n,m,k,f;
	scanf("%d %d",&n,&m);
	char a[n];
	char b[m];
	scanf("%s",a);
	scanf("%s",b);
	if(n!=m)
	printf("both strings are not equal:");
	else
	for(i=0;a[i];i++)
	{
		if(a[i]!=b[i])
	
	{
    f=1;
	k=a[i]-b[i];
	break;
    }
    }
if(f==0)
printf("same string");
else
{
	if(k>0)
	printf("%s",a);
	else
	printf("%s",b);
}
return 0;
}


