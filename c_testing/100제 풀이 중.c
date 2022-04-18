#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() // 1406 : love 
{
	char a[51], cou=0;
	scanf("%s", &a);
	
	// if (s[0]=='l' && s[1]=='o' && s[2]=='v' && s[3]=='e' && s[4]=='\0')
	for (int i = 0; i < sizeof(a); i++) {
		if (a[i] == 'l' || a[i] == 'o' || a[i] == 'v' || a[i] == 'e') {
			cou++;
		}
	}

	if(cou==4)
		printf("I love you.");
	

	return 0;
}

// git add .
// git commit -m "
// git push origin master