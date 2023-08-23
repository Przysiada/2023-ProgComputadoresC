#include <stdio.h>

void main()
{
	int v[] = {1, 2, 3, 4, 5, 6}, *p;
	for (p = v; p <= &v[5]; p++)
		printf("%d\n", *p);
}
