#include <stdio.h>


int main() {
	char num[51];
	int dash[10] = { 6,2,5,5,4,5,6,3,7,6 };
	int sum = 0;

	scanf("%s", num);

	for (int i = 0; num[i] != '\0'; i++) {
		int digit = num[i] - '0';
		sum += dash[digit];
	}
	printf("%d", sum);

	return 0;
}