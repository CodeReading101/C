// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter17/FindBallDebug.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DEBUG
int main() {
	// 먼저 3개 컵 중에서 하나에 공 숨기기
	srand( time( NULL ) );
	int ball = rand() % 3 + 1;
	// 디버깅 모드에서는 공 위치를 공개
	#ifdef DEBUG
	printf( "\033[8;1f[DEBUG] 공 위치 %d\033[1;1f", ball);
	#endif
	printf( "  ___    ___    ___  \n" );
	printf( " |   |  |   |  |   | \n" );
	printf( " | 1 |  | 2 |  | 3 | \n\n\n\n" );
	// 사용자에게 공을 숨긴 컵 번호 입력 받기
	printf( " 1, 2, 3 중에서 공을 숨긴 컵을 찾으세요 : " );
	int cup = 0;
	scanf( "%d", &cup );
	// 공 찾기 결과 출력
	printf( "\033[4;%dfO\n\033[5;%df", ball*7-3, cup*7-5 );
	( cup == ball ) ? printf( "찾았다!\n") : printf( "놓쳤다!\n" );
	return 0;
}

