#include <stdio.h>
#include <stdlib.h>

int main() {
	int K;
	int dir[6];
	int len[6];

	scanf("%d", &K);

	int maxW = 0, maxH = 0;
	int maxWIdx = 0, maxHIdx = 0;

	for (int i = 0; i < 6; i++) {
		scanf("%d %d", &dir[i], &len[i]);

		if ((dir[i] == 1 || dir[i] == 2) && len[i] > maxW) {
			maxW = len[i];
			maxWIdx = i;
		}

		if ((dir[i] == 3 || dir[i] == 4) && len[i] > maxH) {
			maxH = len[i];
			maxHIdx = i;
		}
	}

	int smallW = abs(len[(maxWIdx + 5) % 6] - len[(maxWIdx + 1) % 6]);
	int smallH = abs(len[(maxHIdx + 5) % 6] - len[(maxHIdx + 1) % 6]);
	int area = (maxW * maxH) - (smallW * smallH);
	printf("%d\n", area * K);

	return 0;
}