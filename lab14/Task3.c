#include <stdio.h>

int find_el(int * ptr_array, int n, int type) {

	int index = -1;

	for (int i = 0; i < n; i++) {

		switch (type) {
		case 1:
			if (ptr_array[i] > 0)
				index = i;
			break;
		case -1: 
			if (ptr_array[i] < 0)
				index = i;
			break;
		case 0:
			if (ptr_array[i] == 0)
				index = i;
			break;
		}

		if (index != -1)
			break;
	}

	return index;
}

int main() {

	int array[] = { 1, 2, 3, 4, -5, 6, 0, 8, 9 };

	printf("%d", find_el(array, 9, -1));

	return 0;
}
