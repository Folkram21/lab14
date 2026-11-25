#include <stdio.h>

double sum_elements(double* ptr_array, int begin, int end) {

	double sum;

	for (int i = begin; i < end; i++) {
		sum += ptr_array[i];
	}

	return sum;
}

int main() {

	return 0;
}