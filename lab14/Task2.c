#include <stdio.h>

double sum_elements(double* ptr_array, int begin, int end) {

	double sum = 0.;

	for (int i = begin; i < end; i++) {
		sum += ptr_array[i];
	}

	return sum;
}

int main() {

	double array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	printf("%lf", sum_elements(array, 2, 7));

	return 0;
}