#include <stdio.h>
#define max 10
void merging(int array1[], int array2[], int size1, int size2);

int main()
{
	int i, arr1[max], arr2[max], arr3[max], size1, size2;
	printf("\nEnter the size of the first array = ");
	scanf("%d",&size1);
	printf("\nEnter the first sorted array : \n");
	for (i = 0; i < size1 ; i++)
	{
		scanf("\n%d",&arr1[i]);
	}
	printf("\nEnter the size of the second array = ");
	scanf("%d",&size2);
	printf("\nEnter the second sorted array : \n");
	for (i = 0; i < size2; i++)
	{
		scanf("\n%d",&arr2[i]);
	}

merging(arr1,arr2,size1,size2);

}

void merging(int array1[], int array2[], int size1, int size2)
{
	int result[max];
	int i, j, k, l;
	i=0;j=0;k=0;
	while(i < size1 && j < size2)
	{
		if(array1[i] <= array2[j])
		{
			result[k] = array1[i];
			k++;
			i++;
		}
		if(array1[i] >= array2[j])
		{
			result[k] = array2[j];
			k++;
			j++;
		}
	}
	if(i >= size1)
	{
		for (l = j; l < size2; l++)
		{
			result[k] = array2[l];
			k++;
		}
	}
	if(j >= size2)
	{
		for (l = i; l < size1; l++)
		{
			result[k] = array1[l];
			k++;
		}
	}
	printf("\nThe marged sorted array : \n");
	for (i= 0; i< size1+size2; i++)
	{
		printf("\n%d",result[i]);
	}
}
