#include <stdlib.h>
#include <stdio.h>

char *mx_strnew(const int size) {
    char *arr = (char *)malloc(size + 1);
    if (size < 1)
	return NULL;
    for (int i = 0; i < size; i++)
	arr[i] = '\0';
    arr[size] = '\0';
    return arr;
}

