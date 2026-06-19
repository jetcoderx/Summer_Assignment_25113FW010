/*Write a program to Binary search. */
#include <stdio.h>

int main() {
    int A[100], n, i, j,min,max,mid,key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter Element to search:");
    scanf("%d",&key);

    min=0;
    max=n-1;

    while (min<=max)
    {
        mid=(min+max)/2;

        if(key==A[mid])
       {
        printf("Element %d found at index %d",key,mid);
        return 0;
       }

        else if(key<A[mid])
        max=mid-1;

        else if(key>A[max])
        min=mid+1;

    }

    printf("ELEMENT NOT FOUND");
    return 0;
}
    