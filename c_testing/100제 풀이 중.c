#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1171 : 학년 반 번호 -- 조건 분기 -- a&b c || a&b&c
	int h, m;
	scanf("%d %d", &h, &m);

	m = m-30; // t = (t*60 +m) -30;
	
	if(m<0){
		if(h==0) {
			if(m>-29) { printf("23 %d", 60+m); }
			else { printf("0 %d", 60+m); }
		}
		else printf("%d %d", h-1, 60+m);
	}
	else{ printf("%d %d", h, m);}

	return 0;
}

// git add .
// git commit -m "
// git push origin master