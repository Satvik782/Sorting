//Bubble Sort
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

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}