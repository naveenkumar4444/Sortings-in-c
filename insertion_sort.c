#include <stdio.h>

void insertion_sort();

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
        
    insertion_sort(a);
    
    printf("\nAfter sorting:\n");
    
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
}
void insertion_sort(int a[n])
{
    int i, j, temp;
    for(i=1; i<n; i++)
    {
        temp = a[i];
        j=i;
        while (j>0 && a[j-1]>temp)
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = temp;
    }
}
