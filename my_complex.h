#include <stdio.h>

struct _complex {
	double real;
	double imag;
};

typedef struct _complex Complex;

void print_complex(Complex c);

void complex_struct(Complex (*Comp)(Complex, Complex), Complex a, Complex b);
void comp_struct(double (*Comp)(Complex), Complex a);
 


Complex complex_add(Complex c1, Complex c2);
Complex complex_sub(Complex c1, Complex c2);
Complex complex_mult(Complex c1, Complex c2);
Complex complex_div(Complex c1, Complex c2);

Complex complex_conj(Complex c);

double magnitude(Complex c);
double phase(Complex c);
