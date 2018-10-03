//Quick sort
#include<stdio.h>
void quicksort( int x[10],int ,int);
int main()
{
	int size,i;
	printf("Enter size of the array:");
	scanf("%d",&size);
	int x[size];
	printf("enter the elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&x[i]);
	}
	quicksort(x,0,size-1);
	printf("Sorted element:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",x[i]);
	}
	return 0;
}

void quicksort(int x[10],int first, int last)
{
	int pivot,j,temp,i;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
		
			while(x[j]>x[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
		temp=x[pivot];
		x[pivot]=x[j];
		x[j]=temp;
		quicksort(x,first,i-1);
		quicksort(x,j+1,last);
	}
}