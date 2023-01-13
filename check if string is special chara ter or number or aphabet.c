#include<stdio.h>
#include <string.h>
int main()
{
	int i,alphabet=0,number=0,special=0;
	char a[100];
	gets(a);
	for(i=0;a[i];i++)
	{
		if ((a[i]>=65 && a[i]<=90) ||(a[i]>=97 && a[i]<=120))
		alphabet++;
		else if (a[i]>=48 && a[i]<=57)
    	number++;
    	else
    	special++;
	}
	printf("alphabets:%d\n numbers:%d\n special charcters:%d",alphabet,number,special);
	return 0;
}
