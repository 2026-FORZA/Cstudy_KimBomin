#include <stdio.h>
#include <string.h>
int main() {
	char str[1001];
	fgets(str, sizeof(str), stdin);
	printf("%zu", strlen(str));
	return 0;
}