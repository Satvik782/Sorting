//Linear Search
#include<stdio.h>
int main()
{
    int i,n,m,index=-1;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be searched\n");
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            index=i;
            break;
        }
    }

    if(index>=0)
    {
        printf("Element found at %d index\n",index);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}