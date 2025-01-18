#include <stdio.h>
void main()
{
	int m,n,i,j;
	float a[40][30],s[40];
	printf("m="); scanf("%d", &m);
	printf("n="); scanf("%d", &n);
	for (i = 0; i < m;i++)
	for (j = 0; j < n; j++)
	{
		printf("a[%d][%d]=",i,j);
		scanf("%f",&a[i][j]);
	}
	
	for (i = 0; i < m; i++)
	{
		s[i] = 0;
		for (j = 0; j < n; j++)
			s[i] = s[i] + a[i][j];//s[i]+=a[i][j];
	}
	printf("Sumele pe linii sunt:\n");
	for (i = 0; i < m; i++)
		printf("%4.2f  ", s[i]);
}
