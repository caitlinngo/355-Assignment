#include <stdio.h>
#include "simple-math.c"
//Caitlin Ngo

int main() {
	int result = addingTen(-3);
	if (result == 7){
		printf("Test passed\n");
		return 0;
	}
	else{
		printf("Test failed\n");
		return 1;
	}
}
