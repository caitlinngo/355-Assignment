#include <stdio.h>
#include <assert.h>
#include <simple-math.c>

void test_addingTen() {
	int result = addingTen(-3);
	assert(result == 7);
}

int main() {
	test_addingTen();
	printf("All tests passed!\n");
	return 0;
}
