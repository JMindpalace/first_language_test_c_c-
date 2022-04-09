#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1226 : 로또 프로그램
	int arr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };

	printf("%d\n", &arr); // 168000
	printf("%d\n", arr);  // 168000
	printf("%d\n", *arr); // 1

	printf("%d\n", &arr[0]); // 168000
	printf("%d\n", arr[0]);  // 168000
	printf("%d\n", *arr[0]); // 1

	printf("%d\n", &arr[0][0]); // 168012

	printf("%d\n", arr[0][0]);  // 4

	return 0;
}

// git add .
// git commit -m "
// git push origin master