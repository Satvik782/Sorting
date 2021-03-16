//Selection Sort
#include<stdio.h>
int main()
{
    int n,i,j,t,min;
    printf("Enter no. of elements in array\n");
    scanf("%d",&n);

    int a[n];

    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i;j<n;j++)
        {
            if(a[min]>a[j])
                min=j;
        }
        t=a[i];
        a[i]=a[min];
        a[min]=t;

    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
