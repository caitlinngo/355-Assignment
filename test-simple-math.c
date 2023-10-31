#include "simple-math.c"
#include <stdio.h>
#include <assert.h>

void test_addingTen() {
	int result = addingTen(5);
	assert(result == 15);
} 

int main() {
	test_addingTen();
	printf("All tests passed!\n");
	return 0;
}
