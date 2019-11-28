#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mx_strcpy(char *dst, const char *src);

int mx_strlen(const char *s);

char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    char *ar = mx_strnew(mx_strlen(str) + 1);
    if (ar == NULL)
		return NULL;
    mx_strcpy(ar, str);
    	return ar;
}

