#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#define N 100000

double* full_elements(double* ptr_array, int n) {

	for (int i = 0; i < n; i++) {
		ptr_array[i] = (double)rand();
	}

	return ptr_array;
}

int put_elements(double* ptr_array, int n) {

	for (int i = 0; i < n; i++) {
		printf("\narray[%d] = %lf", i, ptr_array[i]);
	}

	return 0;
}

int main() {

	setlocale(LC_CTYPE, "RUS");

	srand((unsigned)time(NULL));

	double array[N];
	int size;

	printf("Введите размер массива > ");
	scanf("%d", &size);

	full_elements(array, size);
	put_elements(array, size);

	return 0;
}
