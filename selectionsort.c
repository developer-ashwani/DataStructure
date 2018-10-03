#include <stdio.h>
#define max 10
void selectionSort(int arr[], int s);
int main()
{
	int i, size, array[max];
	printf("\nEnter the size of the array = ");
	scanf("%d",&size);
	printf("\nUnsorted array :\n");
	for (int i = 0; i < size; i++)
	{
		scanf("\n%d",&array[i]);
		/* code */
	}
	selectionSort(array,size);
}

void selectionSort(int array[], int size)
{
	int i, j, min, pos, flag = 0;
	for (int i = 0; i < size-1; i++)
	{
		min = array[i];
		for (int j = i+1; j < size; j++)
		{
			/* code */
			if(array[j] < min)
			{
				min = array[j];
				pos = j;
				flag = 1;
			}
		}
		/* code */
		if (flag == 1)
		{
			array[pos] = array[i];
			array[i] = min;
		}
	}
	printf("\nSorted array :");
	for (int i = 0; i < size; i++)
	{
		/* code */
		printf("\n%d",array[i]);
	}
	printf("\n");

}