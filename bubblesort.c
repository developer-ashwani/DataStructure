#include <stdio.h>
#define max 10
void bubbleSort(int arr[],int a);

int main()
{
	int size, array[max], i;
	printf("\n Enter the size of the array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("\t%d",&array[i]);
	}
	printf("\nUnsorted array = ");
	for(i=0;i<size;i++)
	{
		printf("\t%d",array[i]);
	}
	bubbleSort(array,size);
	return 0;
}
//Function for bubble Sort.
void bubbleSort(int array[], int size)
{
	int i, j, temp;
	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size-i ; j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	printf("\nSorted array = ");
	for (i = 0; i < size; i++)
	{
		printf("\t%d",array[i]);
	}
	printf("\n");
}

