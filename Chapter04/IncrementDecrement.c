// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter04/IncrementDecrement.c

#include <stdio.h>
int main() {
	int two = 2, pre = 0, post = 0;
	// 증가연산자 ++의 전위연산자와 후위연산자 실습 및 출력
	pre = ++two;
	printf( "pre  = ++2 는 2+1( 3 ) 실행후 pre = %d\n", pre );
	two = 2;
	post = two++;
	printf( "post = 2++ 는 post = %d 실행후 2+1( 3 )\n", post );
	// 감소연산자 --의 전위연산자와 후위연산자 실습 및 출력
	two = 2;
	pre = --two;
	printf( "pre  = --2 는 2-1( 1 ) 실행후 pre = %d\n", pre );
	two = 2;
	post = two--;
	printf( "post = 2-- 는 post = %d 실행후 2-1( 1 )\n", post );
	return 0;
}

