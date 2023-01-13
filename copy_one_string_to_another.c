#include<stdio.h>
int main()
{
int i;
char a[10];
char b[10];

gets(a);

for(i=0;i<10;i++)
{
  	b[i]=a[i];
}
puts(b);
return 0;
}
