#include <stdio.h>

void selection_sort();

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
    
    selection_sort(a);
    
    printf("\nAfter sorting:\n");
    
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
}
void selection_sort(int a[n])
{
    int i, j, min, temp;
    for (i=0; i<n-1; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
