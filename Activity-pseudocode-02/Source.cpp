#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y,k=1;
	printf("input:");
	scanf("%d %d", &x, &y);
	for (int i = 0;i < x;i++)
	{
		for(int j=0; j < y ; j++)
		{
			printf("*");
		}
		k++;
		printf("\n");
	}

	return 0;






}