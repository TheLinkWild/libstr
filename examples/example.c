include <stdio.h>
#include "libstr"

int main(void) {
	if(startswith("Hello world! :3", "H")) printf(":3 1\n");
	if(startswith("Hello world! :3", "He")) printf(":3 2\n");

	if(endswith("Hello world! :3", "3")) printf(":3 3\n");
	if(endswith("Hello world! :3", ":3")) printf(":3 4\n");

	if(contains("Hello world! :3", "world")) printf(":3 5\n");

	if(isOnPos("Hello world! :3", 5, "world")) printf(":3 6\n");

	printf(":3 7 | %d\n", firstOccurence("Hello world! :3", "world", 0)); // will tell the position of "world" in "Hello world! :3"
	
	return 0;
}

