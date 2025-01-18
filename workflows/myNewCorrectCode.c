#include <stdio.h>
void main()
{
	int m, n, i, j;
	float a[40][30], max[30];
	printf("m="); scanf("%d", &m);
	printf("n="); scanf("%d", &n);
	for (i = 0; i < m; i++)
	for (j = 0; j < n; j++)
	{
		printf("a[%d][%d]=", i, j);
		scanf("%f", &a[i][j]);
	}
 
	for (j = 0; j < n; j++)
	{
		max[j] = a[0][j];
		for (i = 1; i < m; i++)
			if (a[i][j]>max[j])
				max[j] = a[i][j];
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%6.2f  ", a[i][j]);
		printf("\n");
	}
	printf("Maximul de pe fiecare coloana este:\n");
	for (j = 0; j < n; j++)
		printf("%4.2f  ", max[j]);
}
