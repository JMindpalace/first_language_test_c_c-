#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 1282 : 제곱수 만들기 - 차후에 별도 함수 생성
	int i, n;
	scanf("%d", &n);

	int gap = n; // 시작은 gap을 입력된 n과 같게 해서 gap을 줄여나간다. 

	for (i = 1; i * i < n; i++) // 1부터 시작해서 i*i 가 입력된 수보다 작을 때까지 반복. 
	{
		if (gap > n - (i * i)) // 차이를 계산해서 gap이 더 크다면 
			gap = n - (i * i); // gap을 더 차이가 적은 수로 바꾼다. 
	} // for문이 끝나는 기점은 i의 제곱이 n과 최고로 차이가 적을 때이며 for문 종료 후 i++을 수행함을 고려. 

	printf("%d %d", gap, i - 1);

	/*
	for(i=1; ; i++)
    {
        if ( n >= i*i && n < (i+1)*(i+1) )
        {
            printf("%d %d", n-i*i, i);
            return 0;
        }
    }
	*/

	return 0;
}

// git add .
// git commit -m "
// git push origin master