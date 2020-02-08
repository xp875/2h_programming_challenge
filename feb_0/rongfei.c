#include <stdio.h>
#include <math.h>

void main() {
    long int i = 1;
    int ii = 0;
    long int iii = 0;
    long int iv = 0;
    for (i = 1; ii < 10000; i++) {
		iii = (i+1)*(i+1)*(i+1) - i*i*i;
	for (iv = 3; iv <= sqrt(iii); iv += 2) {
	    switch (iii % iv) {
		case 0:
		    iii = 0;
	    }
	}
	switch (iii) {
		case 0:
			break;
		default:
			printf("%i: %li\n", ii++, iii);
	}
    }
}
