//Program of the Linear Search
#include <stdio.h>
#define max 10
int linearSearch(int arr[], int item, int size);

int main()
{
	int i, size, array[max],item,loc;
	printf("\nEnter the size of the array = ");
	scanf("%d",&size);
	printf("\n Value of the array : \n");

	for (i = 0; i < size; i++)
	{
		/* code */
		scanf("\n%d",&array[i]);
	}

	printf("\nEnter the item you want to Search = ");
	scanf("%d",&item);

loc = linearSearch(array, item, size);

printf("\nLocation of the item is = %d",loc);
}

int linearSearch(int array[], int item, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		/* code */
		if(array[i] == item)
		{
			return i;
		}
	}
	
}