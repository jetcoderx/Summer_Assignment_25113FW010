/*Write a program to Selection sort.*/
#include <stdio.h>

int main() {
    int A[100], n, i, j, minIndex, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for ( i = 0; i < n-1; i++)
    {minIndex=i;
       
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[minIndex])
            minIndex=j;
        }

        temp=A[i];
        A[i]=A[minIndex];
        A[minIndex]=temp; 
    }
    printf("Sorted array:\n");

    for(i = 0; i < n; i++) {
        printf("%d ",A[i]);
    }

    return 0;
}
    