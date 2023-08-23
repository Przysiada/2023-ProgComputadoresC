#include <stdio.h>

void main() {
	int arr[10];     
	int *el;        
	int i;
	
	el = &arr[0];
	
	for (i=0; i<10; ++i)
	   *(el + i) = 0;
	}
