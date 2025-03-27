// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter05/FindBall.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	// 먼저 3개 컵 중에서 하나에 공 숨기기
	srand( time( NULL ) );
	int ball = rand() % 3 + 1;
	// 사용자에게 공을 숨긴 컵 번호 입력 받기
	printf( "  ___    ___    ___  \n" );
	printf( " |   |  |   |  |   | \n" );
	printf( " | 1 |  | 2 |  | 3 | \n\n\n\n" );
	printf( "\n\n 1, 2, 3 중에서 공을 숨긴 컵을 찾으세요 : " );
	int cup = 0;
	scanf( "%d", &cup );
	// 공 찾기 결과 출력
	printf( "\033[4;%dfO\n\033[5;%df", (ball*7-3), (cup*7-5) );
	( cup == ball ) ? printf( "찾았다!\n"): printf( "놓쳤다!\n" );
	return 0;
}

