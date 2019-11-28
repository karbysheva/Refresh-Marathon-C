#include <stdio.h>
#include <string.h>

void mx_printstr(const char *s);

void mx_printchar(char c);

int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[]) {
	char *x;
	for (int i = 1; i < argc; i++) {
	    for (int j = i+1; j < argc; j++) {
	        if (mx_strcmp(argv[i], argv[j]) > 0) {
			    x = argv[j];
			    argv[j] = argv[i];
			    argv[i] = x;
			}
		}
	}
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

