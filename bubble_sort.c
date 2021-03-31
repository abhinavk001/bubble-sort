#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int [], int);

int main()
{
 int A[20], size, i;

 printf("Enter the size of array: ");
 scanf("%d", &size);

 //Loop to enter array elements.
 printf("Enter the elements one by one\n");
 for (i=0; i<size; i++)
 {
    scanf("%d", &A[i]);
 }
 system("cls");

 bubbleSort(A, size);

 for(i=0;i<size; i++)
    printf("%d ", A[i]);
 printf("\n");
}



void bubbleSort(int A[20], int size)
{
 int i, j, temp;
 for(i=0; i<size-1; i++)
    for(j=0; j<size-i-1; j++)
        if(A[j]>A[j+1])
        {
             temp = A[j];
             A[j] = A[j+1];
             A[j+1] = temp;
        }
 printf("Array after bubble sorting.\n");
}
