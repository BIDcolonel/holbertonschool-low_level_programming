#include <stdio.h>

/**
 * multiply_matrices - Performs matrix multiplication between two 2x2 matrices.
 * @matrix1: The first matrix.
 * @matrix2: The second matrix.
 */
void multiply_matrices(long long int matrix1[2][2], long long int matrix2[2][2])
{
	long long int a = matrix1[0][0] * matrix2[0][0] + matrix1[0][1] * matrix2[1][0];
	long long int b = matrix1[0][0] * matrix2[0][1] + matrix1[0][1] * matrix2[1][1];
	long long int c = matrix1[1][0] * matrix2[0][0] + matrix1[1][1] * matrix2[1][0];
	long long int d = matrix1[1][0] * matrix2[0][1] + matrix1[1][1] * matrix2[1][1];

	matrix1[0][0] = a;
	matrix1[0][1] = b;
	matrix1[1][0] = c;
	matrix1[1][1] = d;
}

/**
 * matrix_power - Computes the power of a 2x2 matrix using exponentiation by squaring.
 * @matrix: The matrix to be powered.
 * @n: The power to which the matrix is raised.
 */
void matrix_power(long long int matrix[2][2], long long int n)
{
	long long int result[2][2] = {{1, 0}, {0, 1}};
	long long int temp[2][2];

	while (n > 0)
	{
		if (n % 2 == 1)
		{
			multiply_matrices(result, matrix);
		}

		multiply_matrices(matrix, matrix);

		n /= 2;
	}

	matrix[0][0] = result[0][0];
	matrix[0][1] = result[0][1];
	matrix[1][0] = result[1][0];
	matrix[1][1] = result[1][1];
}

/**
 * fibonacci - Calculates the nth Fibonacci number using matrix exponentiation.
 * @n: The position of the Fibonacci number to be calculated.
 * Return: The nth Fibonacci number.
 */
long long int fibonacci(int n)
{
	if (n <= 0)
	{
		return (0);
	}

/**
 * Base case: F(0) = 0, F(1) = 1
 */
	if (n <= 2)
	{
		return (1);
	}

	long long int matrix[2][2] = {{1, 1}, {1, 0}};

	matrix_power(matrix, n - 2);

/**
 * Return the value in the top-left corner of the resulting matrix
 */
	return (matrix[0][0] + matrix[0][1]);
}

/**
 * main - Entry point of the program.
 * Return: 0 on success.
 */
int main(void)
{
	long long int result = fibonacci(1000000);

	printf("%lld\n", result);
	return (0);
}
