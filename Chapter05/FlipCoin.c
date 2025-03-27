// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter05/FlipCoin.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	// 먼저 동전을 임의로 던져서 받고 숨기기
	srand( time( NULL ) );
	int coin = ( rand() % 2 ) + 1;
	// 사용자는 동전의 앞면과 뒤면 중 하나를 선택
	printf( "동전의 앞면(1), 뒤면(2) 중 하나를 선택하세요: " );
	int user = 0;
	scanf( "%d", &user );
	// 사용자가 동전의 상태를 맞추었는지 결과 출력
	( coin == user ) ? printf( "맞았습니다\n" ): printf( "틀렸습니다\n" );
	return 0;
}

