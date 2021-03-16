#include<stdio.h>
void mergeSort(int[],int,int);
void merge(int[],int,int,int);

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

    mergeSort(a,0,n-1);

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}

void merge(int a[],int l,int m, int r)
{
    int i,j,k;
    int n1,n2;

    n1=m-l+1;
    n2=r-m;

    int x[n1];
    int y[n2];

    for (i = 0; i < n1; i++)
        x[i] = a[l + i];
    for (j = 0; j < n2; j++)
        y[j] = a[m + 1 + j];

    i=0;
    j=0;
    k=l;

    while (i < n1 && j < n2) 
    {
        if (x[i] <= y[j])
        {
            a[k] = x[i];
            i++;
        }
        else 
        {
            a[k] = y[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = x[i];
        i++;
        k++;
    }
    
    while (j < n2)
    {
        a[k] = y[j];
        j++;
        k++;
    }
}

void mergeSort(int a[],int l,int r)
{
    if (l<r) 
    {
        int m=l+(r-l)/2;

        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
 
        merge(a,l,m,r);
    }
}