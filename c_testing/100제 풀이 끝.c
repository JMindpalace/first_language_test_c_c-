/* 1~8 printf로 우측 주어진 문장 출력*/
	// printf("Hello");  - Hello
	// printf("Hello World");  - Hello World
	// printf("Hello\nWorld");  - Hello 다음줄 World
	// printf("\'Hello\'");  - 'Hello'
	// printf("\"Hello World\"");  - "Hello World"
	// printf("\"!@#$%%^&*()\"");  - "!@#$%^&*()"
	// printf("\"C:\\Download\\hello.cpp\"");  - "C:\Download\hello.cpp"
	// printf("\u250C\u252C\u2510\n\u251C\u253C\u2524\n\u2514\u2534\u2518");  - 유니코드 출력

/* 10~27 입&출력 */
	// int a, b, c; char x, x1; float y, y1; double z, z1;
	// scanf("%d", &a); printf("%d", a); - 정수 1개 입력받아 출력
	// scanf("%c", &x); printf("%c", x); - 문자 1개 입력받아 출력
	// scanf("%f", &y // "lf", &z); printf("%f", y // "lf", &z); - 실수 1개 입력받아 출력
	// scanf("%d %d", &a, &b); printf("%d %d ", a, b); - 정수 2개 입력받아 출력
	// scanf("%c %c", &x, &x1); printf("%c %c", x1, x); - 문자 1개 입력받아 반대로 출력
	// scanf("%f", &y); printf("%.2f", y); - 실수 1개 입력받아 둘째짜리까지 출력
	// scanf("%d", &a); printf("%d %d %d", a, a, a); - 정수 1개 입력받아 3번 출력
	// scanf("%d:%d", &a, &b); printf("%d:%d", a, b); - 시간을 입력받아 지정 형식(hh:mm)으로 출력
	// scanf("%d.%d.%d", &a, &b, &c); printf("%04d.%02d.%02d", a, b, c); - 연월일을 입력받아 지정 형식(yyyy.mm.dd)으로 출력
	// scanf("%d-%d", &a, &b); printf("%06d%07d", a, b); - 주민번호를 입력받아 지정 형식(13자리 숫자, -으로 앞뒤 구분)으로 출력
	// char a[51]; scanf("%s", &a); printf("%s", a); - 단어 1개 입력받아 출력
	// char conte[2001]; fgets(conte,2000,stdin); printf("%s", conte); - 공백 문자가 포함된 1개 문장 입력받아 출력
		// gets(conte); printf("%s", conte);  |  gets(conte); puts(conte);
	// scanf("%d.%6d",&a,&b); printf("%d\n%d", a, b); - 실수 1개 입력받아 정수부와 실수부로 출력
		// scanf("%lf", &z); a = z/1; z1 = z-a; printf("%d\n%0.6f", a, z1);  |  #math의 modf()
	// char a[21]; scanf("%s", &a); for(int i=0; a[i]!='\0'; i++) printf("\'%c\' \n", a[i]); - 단어 1개 입력받아 1줄에 1단어 출력
	// int a, b, c, d, e; scanf("%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e);printf("[%d0000]\n[%d000]\n[%d00]\n[%d0]\n[%d]", a,b,c,d,e);  - 정수 1개 입력받아 1줄에 10단위만큼 출력
	// int a, b, c; scanf("%d:%d:%d", &a, &b, &c); printf("%01d", b); - 시분초를 입력받아 분만 출력
	// int y, m, d; scanf("%d.%d.%d", &y, &m, &d); printf("%02d-%02d-%04d", d, m, y); - 연월일(yyyy.mm.dd)을 입력받아 지정 형식(dd-mm-yyyy)으로 출력

/* 28~30 datatype */
	// unsigned int a; scanf("%u", &a); printf("%u", a);  - 정수 1개 입력받아 출력(단, 0이상만 입출력)
	// double a; scanf("%lf", &a); printf("%.11lf", a); - 실수 1개 입력받아 출력(단, float는 +-1.7*10^+-138 / double은 +-3.4*10^+-308)
	// long long int a; scanf("%lld", &a); printf("%lld", a);  - 정수 1개 입력받아 출력(단, +-9백경)

/* 31~37 printtype */   // int a;
	// scanf("%d", &a); printf("%o", a); - 10진수 정수 1개 입력받아 8진수 정수로 출력
	// scanf("%d", &a); printf("%x", a); - 10진수 정수 1개 입력받아 16진수 정수(x는 소문자, X는 대문자)로 출력
	// scanf("%o", &a); printf("%d", a); - 8진수 정수 1개 입력받아 10진수 정수로 출력
	// scanf("%x", &a); printf("%o", a); - 16진수 정수 1개 입력받아 8진수 정수로 출력
	// scanf("%c", &a); printf("%d", a); - 영문자 1개 입력받아 10진수 정수로 출력
	// scanf("%d", &a); printf("%c", a); - 정수를 입력받아 아스키문자로 출력

/* 38~46 + - / * mathematics */   // (unsigned) int a, b, c, d; char x; 
	// scanf("%lld %lld", &a, &b); printf("%lld", a+b);  -  정수 2개 입력받아 합 출력하기
	// scanf("%d", &a); printf("%d", -a);  -  입력 받은 수의 반대 부호 붙히기
	// scanf("%c", &x); printf("%c", x+1);  -  입력 받은 다음 문자를 출력하기
	// scanf("%d %d", &a, &b); printf("%d", a/b / a%b);  -  입력 받은 2개의 정수를 나눈 몫 / 나머지 출력하기
	// scanf("%d", &a); printf("%d", ++a);  -  입력 받은 수의 +1을 출력하기
	// scanf("%d %d", &a, &b); printf("%d\n%d\n%d\n%d\n%d\n%.2f\n", a+b, a-b, a*b, a/b, a%b, (float)a/b);  -  입력 받은 두 수의 합, 차, 곱, 몫, 나머지, 나눈 값 출력하기
	// scanf("%d %d %d", &a, &b, &c); d=a+b+c; printf("%d\n%.1f", d, (float)d/3);  -  입력 받은 3개의 정수를 합과 평균 출력하기
		// printf("%d\n%.1f", a+b+c, a+b+c/3.0);

/* 47~48 bitshift */  // int a, b; 
	// scanf("%d", &a); printf("%d", a<<1);  -  입력 받은 정수를 2배로 출력하기
	// scanf("%d %d", &a, &b); printf("%d", a<<b);  -  입력 받은 정수 a를 2^b배로 출력하기

/* 49~52 compare */   // int a, b; scanf("%d %d", &a, &b); printf("%d", a>b / a==b / b>=a / a!=b);  -  a가 b보다 큼 / a와 b가 같음 / b가 a보다 크거나 같음 / a와 b가 다름

/* 53~58 logic calculation */  // int a, b; 
	// scanf("%d %d", &a, &b); printf("%d", !a / a&&b / a||b);  -  참/거짓 바꾸기 / 둘 다 참 / 둘 중 하나 참
	// scanf("%d %d", &a, &b); printf("%d", a^b == (a&&!b)||(!a&&b) / !(a^b) );  -  참&거짓이 다를 때(XOR) 참 / 같을 때 참
	// scanf("%d %d", &a, &b); printf("%d", !(a||b) );  -  둘 다 거짓이면 참

/* 59~62 bit logic calculation */  // int a, b; 
	// scanf("%d", &a); printf("%d", ~a);  -  비트단위로 NOT 출력
	// scanf("%d %d", &a, &b); printf("%d", a&b);  -  비트단위로 AND 출력 - 같은 네트워크에 연결된지 판단, 그래픽처리에 용이
	// scanf("%d %d", &a, &b); printf("%d", a|b);  -  비트단위로 AND 출력
	// scanf("%d %d", &a, &b); printf("%d", a^b);  -  비트단위로 XOR 출력 - 비행기 슈팅게임에서 배경과 움직이는 그림(겹치는 부분 중 서로 다른 부분만 처리)

/* 63~64 Simple condition */  // int a, b, c; 
	// scanf("%d %d", &a, &b); printf("%d", a>b?a:b);  -  입력받은 2정수 중 큰 수 출력
	// scanf("%d %d %d", &a, &b, &c); printf("%d", (a>b?b:a)>c ? c : (a>b?b:a));  -  입력받은 3정수 중 작은 수 출력

/* 65~70 if~eles condition */  // int a, b, c; 
	// scanf("%d %d %d", &a, &b, &c); if(a%2==0) printf("%d\n", a); if(b%2==0) printf("%d\n", b); if(c%2==0) printf("%d\n", c);  -  
	// scanf("%d %d %d", &a, &b, &c); if(a%2==0) printf("even\n", a); else printf("odd\n", a);  -  
		// if(b%2==0) printf("even\n", b); else printf("odd\n", b); if(c%2==0) printf("even\n", c); else printf("odd\n", c);   -  
	// scanf("%d", &a); if(a>0) printf("plus\n", a); else printf("minus\n", a); if(a%2==0) printf("even\n", a); else printf("odd\n", a);
	// scanf("%d", &a); if(a==12||a==1||a==2) printf("winter\n"); else if(a==3||a==4||a==5) printf("spring\n"); else if(a==6||a==7||a==8) printf("summer\n"); else printf("fall\n");


// git add .
// git commit -m "history"
// git push origin master