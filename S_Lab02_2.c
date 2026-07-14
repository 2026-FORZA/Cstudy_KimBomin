#include <stdio.h>

int main() {
	int N;
	int count = 0;

	scanf("%d", &N);

	for (int i = 0; i <= N; i++) {
		for (int j = i; j <= N;j++) {
			count++;
		}
	}

	printf("%d", count);

	return 0;
}