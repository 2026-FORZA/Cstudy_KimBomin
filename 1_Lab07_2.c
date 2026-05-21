#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char* str;
	int a, b;

	str = (char*)malloc(101 * sizeof(char));
	scanf("%s", str);
	scanf("%d %d", &a, &b);

	for (int i = a - 1; i <= b - 1; i++) {
		printf("%c", *(str + i));
	}

	free(str);

	return 0;
}