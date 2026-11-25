#include <stdio.h>

double sum_elements(double* ptr_array, int begin, int end) {

	double sum = 0.;

	for (int i = begin; i < end; i++) {
		sum += ptr_array[i];
	}

	return sum;
}

int find_element(double* ptr_array, int n, double element) {

	int index = -1;

	for (int i = 0; i < n; i++) {
		if (ptr_array[i] == element)
			index = i;
	}

	return index;
}

int main() {

	double array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	printf("%lf\n", sum_elements(array, 2, 7));
	printf("%d", find_element(array, 9, 6));

	return 0;
}