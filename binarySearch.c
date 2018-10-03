//Program for the Binary Search
//The code has the bug array[55,44,33,22,11]; item =11 (value is not found)
#include <stdio.h>
#define max 10
int binarySearch(int a[], int lb, int ub, int item);
int loc;

int main()
{
	int i, array[max],size,item,lb=0 ;
	printf("\nEnter the size of the array = ");
	scanf("%d",&size);
	printf("\nEnter the sorted array : \n");
	for (int i = 0; i < size; i++)
	{
		/* code */
		scanf("\n%d",&array[i]);
	}
	printf("\nEnter the item to Search : ");
	scanf("%d",&item);

	loc = binarySearch(array,lb,size-1,item);
	if(loc == -1)
		printf("\nItem is not present in the array");
	else
		printf("\nLocation of the item is = %d",loc);
}

int binarySearch(int array[], int lb, int ub, int item)
{
	int mid = (lb + ub)/2;
	if(ub >= lb)
	{	
		if(array[mid] == item)
		{
			return mid;
		}
		if(array[mid] < item)
		{
			lb = mid +1;
			return binarySearch(array,lb,ub,item);
		}
		if(array[mid] > item)
		{
			ub = mid -1;
			return binarySearch(array,lb,ub,item);
		}
	}
	else 
		return -1;
}