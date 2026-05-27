#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;

	int arr1[20];
	int arr2[20];

	int* p = nullptr;
	int* q = nullptr;

	scanf("%d", &N);

	for (p = arr1; p < arr1 + N; p++)
		scanf("%d", p);

	for (q = arr2; q < arr2 + N; q++)
		scanf("%d", q);

	for (p = arr1, q = arr2 + N -1; p < arr1 + N; p++, q--)
		printf(" %d", *p + *q);

	return 0;
}
