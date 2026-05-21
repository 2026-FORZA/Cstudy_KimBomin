#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

struct Student {
	char name[11];
	int s1, s2, s3;
};

int main() {
	struct Student arr[100];
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s %d %d %d", arr[i].name, &arr[i].s1, &arr[i].s2, &arr[i].s3);
	}

	int top = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i].s1 > arr[top].s1) {
			top = i;
		}
	}

	int rank2 = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i].s2 > arr[top].s2) {
			rank2++;
		}
	}

	int rank3 = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i].s3 > arr[top].s3) {
			rank3++;
		}
	}

	printf("%s %d %d", arr[top].name, rank2, rank3);

	return 0;
}