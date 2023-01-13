#include<stdio.h>
#include<string.h>

int main()
{
    int k,i;
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
    printf(" %d",i);
    }
    }
    return 0;
}
