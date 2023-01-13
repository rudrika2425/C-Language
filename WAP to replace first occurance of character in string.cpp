#include<stdio.h>
#include<string.h>

int main()
{
    int k=0,i;
    char a[100];
    gets(a);
    char b;
    int n=strlen(a);
    printf("enter the word to be searched. ");
    scanf("%c",&b);
    for(i=0;i<n;i++)
    {
    if(a[i]==b)
    {
     a[i]='r';
    break;
    }
    }
    printf("%s",a);
    return 0;
}


