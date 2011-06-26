/*
 *  acmda/v1/1000.c
 *
 *  2011 (C) Harry Wei
 */

#include <stdio.h>

int main(void)
{
	int a;
	int b;

	fscanf(stdin, "%d%d", &a, &b);
	fprintf(stdout, "%d\n", a + b);
	return 0;
}
