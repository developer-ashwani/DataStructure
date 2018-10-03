#include <stdio.h>
#define max 3

void matrixMultiplication(int mat1[][max], int mat2[][max], int s);

int main()
{
	int i, j, k, matrix1[max][max], matrix2[max][max];
	int matrix3[max][max], size;
	printf("\nEnter the size of the both matrix = ");
	scanf("%d",&size);

//Taking the value of first matrix.
	printf("\nEnter the value of the first matrix1 :\n");
	for (i = 0; i < size; i++)
	{
		/* code */
		for (j = 0; j < size; j++)
		{
			/* code */
			scanf("\t%d",&matrix1[i][j]);
		}
	}
//Taking the value of second matrix.
	printf("\nEnter the value of the second matrix2 :\n");
	for (i = 0; i < size; i++)
	{
		/* code */
		for (j = 0; j < size; j++)
		{
			/* code */
			scanf("\t%d",&matrix2[i][j]);
		}
	}

	printf("\nMultiplication of matrix are : " );

	matrixMultiplication(matrix1,matrix2,size);
}

void matrixMultiplication(int matrix1[][max], int matrix2[][max], int size)
{
	int i, j, k;
	int result[max][max];
	for (i = 0; i < size; i++)
	{
		/* code */
		for (j = 0; j < size; j++)
		{
		
			result[i][j] = 0;
			for (k = 0; k < size; k++)
			{
				result[i][j] = result[i][j]+ matrix1[i][k] * matrix2[k][j];
			}
		}
	}

	printf("\n Multiplied array : \n");
	for (i = 0; i < size; i++)
	{
		/* code */
		for (j = 0; j < size; j++)
		{
			/* code */
			printf("\t%d",result[i][j]);
		}
		printf("\n");
	}
	
}