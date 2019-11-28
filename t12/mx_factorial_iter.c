#include <stdio.h>

int mx_factorial_iter(int n) {
    int i;
    if ( n < 0 || n > 12)
	return 0;
    if (n == 0)
	return 1;
    for (i = 1; n > 1; i*= (n--));
    return i;
}

