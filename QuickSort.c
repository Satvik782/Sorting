#include<stdio.h>
void quickSort(int[],int,int);
int partition(int[],int,int);

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

    quickSort(a,0,n-1);

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}

void quickSort(int a[],int l, int h)
{
    int n;

    if(l<h)
    {
        n=partition(a,l,h);
         quickSort(a,l,n-1);
         quickSort(a,n+1,h);
    }
}

int partition(int a[],int l, int h)
{
    int p,i,j,t;

    p=a[h];
    i=l-1;

    for(j=l;j<h;j++)
    {
        if(a[j]<p)
        {
            i++;
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }

    t=a[i+1];
    a[i+1]=a[h];
    a[h]=t;
    return(i+1);
}