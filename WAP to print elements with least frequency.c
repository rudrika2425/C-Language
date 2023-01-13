#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[27]={0};
    int i,x;
    gets(a);
    int n=strlen(a);
    for(i=0;i<n-1;i++)
	{
       b[a[i]-'a']++;
    }
    int min=b[0];
    for(i=0;i<27;i++)
	{
      if(b[i]<min)
	  {
      min=b[i];
      x=i+97;
    }
	}
      printf("frequency of %c is min %d\n",x,min);
    
    return 0;
}
