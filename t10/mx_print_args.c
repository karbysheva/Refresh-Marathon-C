#include <string.h>
#include <stdio.h>
#include <unistd.h>

void mx_printstr(const char *s);

void mx_printchar(char c);

int main(int argc, char *argv[]) {
    int i;
    for (i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
	mx_printchar('\n');
    }
}

