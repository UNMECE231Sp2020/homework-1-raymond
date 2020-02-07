#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};
	int i;

	Complex (*fn_array[4])(Complex, Complex) = {complex_add, complex_sub,complex_mult,complex_div};
	double (*fn_array2[2])(Complex)={magnitude, phase};

	for(i=0; i<4; ++i) {
		complex_struct(fn_array[i], a, b);
	}
	for(i=0; i<2; ++i) {
		comp_struct(fn_array2[i], a);
		comp_struct(fn_array2[i], b);
	}

	return 0;
}
