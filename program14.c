#include <stdio.h>
#define MAX_SIZE 1000 // Maximum array size
void main()
{
int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
int i, N;
clrscr();
printf("Enter size of array: ");
scanf("%d", &N);
printf("Enter %d elements in the array : ", N);
for(i=0; i<N; i++)
{
scanf("%d", &arr[i]);
}
/*
* Print all elements of array
*/
printf("\nElements in array are: ");
for(i=0; i<N; i++)
{
printf("%d, ", arr[i]);
}
