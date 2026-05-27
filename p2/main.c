#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char arr[10] = {};
	char* p = nullptr;
	char* q = nullptr;

	char max_char = '\0';
	int max_count = 0;

	for (p = arr; p < arr + 10; p++) {
		scanf("%c", p);
	}

	for (p = arr; p < arr + 10; p++) {
		int count = 0;

		for (q = arr; q < arr + 10; q++) {
			if (*p == *q) {
				count++;
			}
		}

		if (count > max_count) {
			max_count = count;
			max_char = *p;
		}
	}
	printf("%c %d\n", max_char, max_count);

	return 0;
}
