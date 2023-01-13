#include<stdio.h>
int main()
{
   int i,k,j;
char a[100];
char b[100];
char c[200];
scanf("%s",a);
scanf("%s",b);
for(i=0;a[i];i++)
{
	c[i]=a[i];
}
for(k=i,j=0;b[j];j++,k++)
{
	c[k]=b[j];
}
c[k]=0;
printf("%s",c);
return 0;
}
