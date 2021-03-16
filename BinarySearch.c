//Binary Search
#include<stdio.h>
int main()
{
    int i,n,m,index=-1;
    int mid,ll,ul;

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

    ul=n-1;
    ll=0;
    mid=(ul+ll)/2;
    while(ul>=ll)
    {
        mid=(ul+ll)/2;
        if(a[mid]==m)
        {
            index=mid;
            break;
        }
        else if(a[mid]<m)
        {
            ll=mid+1;
        }
        else
        {
            ul=mid-1;
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