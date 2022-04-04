#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, k, w, v, arr_wv[100][2] = {0}, arr_v_find[100], val_max=0;
	scanf("%d %d", &n, &k);
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &w, &v);
		arr_wv[i][0] = w; arr_wv[i][1] = v;
	}

	for (int i = 0; i < n; i++) {
		arr_v_find[i] = arr_wv[i][1];
		for (int j = i+1; j < n; j++) {
			if ((arr_wv[i][0] + arr_wv[j][0]) > k) { continue; }
			else { arr_v_find[i] += arr_wv[j][1]; }
		}
	}

	val_max = arr_v_find[0];
	for (int i = 1; i < n; i++) {
		if (arr_v_find[i] > val_max) {
			val_max = arr_v_find[i];
		}
		else { continue; }
	}
	printf("%d", val_max);
}
// (i%10 == 3 || i % 10 == 6 || i % 10 == 9)  - 일의자리 3,6,9
// 1 121 12421 1248421 || 파스칼의 삼각형 || 팰린드롬수 - 2k-1

// git add .
// git commit -m "history"
// git push origin master