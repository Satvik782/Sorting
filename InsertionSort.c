#include<stdio.h>
int main()
{
    int i,n,t,j;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++)
    {
        t=a[i];
        for(j=i-1;j>=0 && a[j]>t;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=t; 
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}