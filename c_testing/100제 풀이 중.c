#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1226 : 로또 프로그램
	int arr[3][4] = { {1,2,3,4} , {5,6,7,8} , {9,10,11,12} }; // arr = &&arr
	int(*ptr)[4] = arr;

	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			printf("%d", *ptr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

// git add .
// git commit -m "
// git push origin master