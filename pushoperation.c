#include <stdio.h>
#define max 10
int main()
{
	int stack[max], top = -1, item;

	printf("\nEnter the item to push in the stack : ");
	scanf("%d",&item);

	if(top == max)
		printf("\n Overflow!!");
	else
		stack[++top] = item;
	
	printf("\n inserted value is = %d \n",stack[top]);
}