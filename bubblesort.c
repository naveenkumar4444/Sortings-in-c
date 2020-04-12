#include <stdio.h>

void bubble_sort();

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
        
    bubble_sort(a);
    
    printf("\nAfter sorting:\n");
    
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
}
void bubble_sort(int a[n])
{
    int i, j, temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<(n-1)-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
