#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1295 : 알파벳 대소문자 변환
{
	char a[1000] = "";
	scanf("%s", a);

	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 65 && a[i] <= 90) {
			a[i] = a[i] + 32;
		}
		else if (a[i] >= 97 && a[i] <= 122) {
			a[i] = a[i] - 32;
		}
	}
	printf("%s", a);

	return 0;
}

// git add .
// git commit -m "
// git push origin master