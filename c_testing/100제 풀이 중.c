#define _CRT_SECURE_NO_WARNINGS // 가치 반복 하기
#include <stdio.h>
int main()
{
	int n, k, w, v, wv[100][2] = {0}, v_find[100] = {0}, val_max=0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &w, &v);
		wv[i][0] = w; wv[i][1] = v;
	}
	for (int i = 0; i < n; i++) {
		v_find[i] = wv[i][1];
		for (int j = 0; j < n; j++) {
			if (i == j) { continue; }
			else {
				if ((wv[i][0] + wv[j][0]) > k) { continue; }
				else {
					v_find[i] += wv[j][1];
					if (v_find[i] > val_max) { val_max = v_find[i]; }
				}
			}
		}
	}
	printf("\n %d", val_max);
	return 0;
}
// (i%10 == 3 || i % 10 == 6 || i % 10 == 9)  - 일의자리 3,6,9
// 1 121 12421 1248421 || 파스칼의 삼각형 || 팰린드롬수 - 2k-1

// git add .
// git commit -m "history"
// git push origin master