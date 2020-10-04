
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int data, i, j, k, min, max;
int num[100], much[100];
int evenoroddnumber(int data) {
	if (data % 2 == 0) {
		printf("this number is even\n");
	}
	else {
		printf("this number is odd\n");
	}
}
int main()
{
	printf("HOW MUCH YOUR DATA :");
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		printf("Enter number : ");
		scanf("%d", &num[i]);
		evenoroddnumber(num[i]);
		for (int j = 0; j <= i; j++)
		{
			if (i == j && j < k)
			{
				much[j] = num[i];
			}
		}
	}
	min = much[0];
	for (j = 0; j < k; j++)
	{
		if (min > much[j])
		{
			min = much[j];
		}
		else if (max < much[j])
		{
			max = much[j];
		}
		else {}
	}
	printf("the minimum is %d and the maximum is %d \n", min, max);
	return 0;
}