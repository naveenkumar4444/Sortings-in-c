#include <stdio.h>

void merge_sort(int [], int, int);
void merge(int [], int, int, int);

int n;

int main()
{
    int i;
    
    printf("\nEnter size of an array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("\nEnter elements of an array: ");
    
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
        
    printf("\nBefore sorting:\n");
    
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
        
    merge_sort(a, 0, n-1);
    
    printf("\nAfter sorting:\n");
    
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
}

void merge_sort(int a[n], int l, int r)
{
    int mid;
    if (l < r)
    {
        mid = (l+r)/2;
        merge_sort(a, l, mid);
        merge_sort(a, mid+1, r);
        merge(a, l, mid, r);
    }
}

void merge(int a[n], int l, int mid, int r)
{
    int i, j, k, b[n];
    
    for(i=l; i<=r; i++)
        b[i] = a[i];
    
    i = l;
    j = mid+1;
    k = l;
    
    while ((i<=mid) && (j<=r))
    {
        if (b[i] <= b[j])
        {
            a[k] = b[i];
            i++; 
        }
        else
        {
            a[k] = b[j];
            j++; 
        }
        
        k++;
    }
   
    while (i <= mid)
    {
        a[k] = b[i];
        i++; 
        k++;
    }

    while (j <= r)
    {
        a[k] = b[j];
        j++; 
        k++;
    }
}
