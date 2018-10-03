#include <stdio.h>
void towerOfHonoi(int n, char source, char auxulary, char destination);

int main()
{
	int totalnofDisk;
	printf("\nEnter the no of disks = ");
	scanf("%d",&totalnofDisk);

	towerOfHonoi(totalnofDisk,'S','A','D');
}

void towerOfHonoi(int num, char source, char auxulary, char destination)
{
	if (num == 1)
	{
		printf("\n Move the %d disk from %c to %c",num,source,destination);
		
		return;
	}
	else
	{
		towerOfHonoi(num-1,source,destination,auxulary);
		printf("\n Move the %d disk from %c to %c",num,source,destination);
		towerOfHonoi(num-1,auxulary,source,destination);
	}

}