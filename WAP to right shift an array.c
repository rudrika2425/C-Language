#include <stdio.h>

int main()
{
    int n,i;
    printf("enter len : ");
    scanf("%d",&n);
    printf("enter array : ");
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int l=n-2;
    int temp=a[n-1];
    for(i=0;i<=l;i++)
    {
    a[i+1]=a[i];
    }
    a[0]=temp;
    printf("array after right shift\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}


