/*
	Write the function strend(s,t), which returns 1 if the string t occurs at the
	end of the string s, and zero otherwise.
*/

#include <stdio.h>

int strend(char *, char *);

int main(int argc, char const *argv[]) {
	char *s = "hello world!";
	char *t = "world!";
	printf("output: %d\n", strend(s, t));
	return 0;
}

int strend(char *s, char *t) {
	char *p = t;
	while (*t++ != '\0');
	while (*s++ != '\0');
	while(*--s == *--t && t >= p);
	return ++t == p;
}
