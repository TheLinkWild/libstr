#include <stdio.h>
#include "libstr"


int main() {
	string str("Hello World!");
	printf("%s\n", str.getString());
	printf("%d\n\n", str.getStringLenght());

	
	if(str.startswith("Hello")) {
		printf("hey\n");
	}
	if(str.endswith("World!")) {
		printf("hey ya\n");
	}
	if(str.contains("World")) {
		printf("Weeeh\n");
	}
	if(str.isOnPos(0, "Hello")) {
		printf("Happy!\n");
	}
	printf("%d\n", str.firstOccurence("World", 0));
	// ... 

	str.modifyString("How are you today?");
	printf("%s\n", str.getString());
	printf("%d\n", str.getStringLenght());

	return 0;
}
