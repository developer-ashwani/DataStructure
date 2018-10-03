#include <stdio.h>
#define max 10

int main()
{
	int stack[] = {1,2,3}, top = 2, item;

	if(top == -1)
		printf("\nUnderflow");
	else
		item = stack[top--];

printf("\nDeleted item is %d",item);
}