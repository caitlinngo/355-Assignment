#include <stdio.h>
#include "simple-math.c"
//Caitlin Ngo

int main() {
	int result = addingTen(5);
	if (result == 15){
		printf("Test passed\n");
		return 0;
	}
	else {
		printf("Test failed\n");
		return 1;
	}
}
