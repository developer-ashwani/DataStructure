//Insertion Sort
#include <stdio.h>
#define max 10
void insertionSort(int arr[], int s);
int main()
{
	int i, array[max], size;
	printf("\nEnter the size of the array");
	scanf("\n%d",&size);
	printf("\nUnsorted array : \n");
	for (int i = 0; i < size; i++)
	{
		/* code */
		scanf("\n%d",&array[i]);
	}
	insertionSort(array,size);
}

void insertionSort(int array[], int size)
{
	int i, j, temp;
	for (int i = 1; i < size; i++)
	{
		/* code */
		temp = array[i];
		j = i-1;
		while(j>=0 && array[j] > temp)
		{
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = temp;
	}
	printf("\nSorted array : \n");

	for (int i = 0; i < size; ++i)
	{
		/* code */
		printf("\n%d",array[i]);
	}
	printf("\n");
}