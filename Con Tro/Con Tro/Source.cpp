#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() {

	int *a;
	
	a = (int *)realloc(0, sizeof(int *));

	*a = 69;
	printf("Gia tri %d", *a);
	free(a);
	getch();
	return 0;
}