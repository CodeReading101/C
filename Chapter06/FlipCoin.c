// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter06/FlipCoin.c

#include <stdio.h>
#include <stdlib.h>							
#include <time.h>							

// 프로그램 시작 
int main() {
	int headsOrTails = 0, user = 0;
	char again = '\0';

	do {
		// 동전 던지기 게임 
		// 먼저 동전을 임의로 던져서 받고 숨기기 
		srand( time( NULL ) );						
		headsOrTails = rand() % 2 + 1;					

		// 사용자는 동전의 앞면과 뒤면 중 하나를 선택	 
		printf("동전의 앞면(1), 뒤면(2) 중 하나를 선택하세요: ");
		scanf( "%d", &user );

		// 사용자가 동전의 상태를 맞추었는지 결과 출력	 
		( headsOrTails == user ) ? printf( "맞췄습니다.\n" ) : printf("틀렸습니다.\n");

		// 사용자에게 게임을 한번 더 할지 묻기 
		printf("동전 던지기 게임을 한 번 더 하시겠습니까?(y/n): ");
		scanf( "\n%c", &again );
	} while( ( again == 'y' ) || ( again == 'Y' ) );

	// 프로그램 종료 
	return 0;
}

