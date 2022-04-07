#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1201 : trillionth
	int t;
	scanf("%d", &t);
	
	if(t%10==1){
		if(t==11) printf("%dth", t);
		else printf("%dst", t);
	}
	else if(t%10==2){
		if(t==12) printf("%dth", t);
		else printf("%dnd", t);
	}
	else if(t%10==3){
		if(t==13) printf("%dth", t);
		else printf("%drd", t);
	}
	else{ printf("%dth", t); }

	return 0;
}

// git add .
// git commit -m "
// git push origin master