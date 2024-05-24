// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter15/RockPaperScissors.c

#include <stdio.h>
#include <stdlib.h>

// 가위바위보 매크로 상수 정의
#define SCISSOR 1
#define ROCK    2
#define PAPER   3

// A양이 승리한 경우 확인 매크로 함수
#define DoesPlayerAWin( playerA, playerB )
	// A양이 가위이고 B군이 보를 낸 경우 A양 승리
	( ( ( playerA == SCISSOR ) && ( playerB == PAPER ) )
	// A양이 바위이고 B군이 가위를 낸 경우 A양 승리
	|| ( ( playerA == ROCK ) && ( playerB == SCISSOR ) )
	// A양이 보이고 B군이 바위를 낸 경우 A양 승리
	|| ( ( playerA == PAPER ) && ( playerB == ROCK ) ) )
	? 1 : 0

// 가위바위보 입력 함수
int getRockPaperScissors() {
	int player = 0;
	// 사용자가 가위바위보중 하나를 선택
	printf("가위(1), 바위(2), 보(3) 중 하나를 숫자로 입력하세요: ");
	scanf( "%d", &player );

	// 사용자가 선택한 결과를 출력
	switch( player ) {
	case SCISSOR:
		printf( "가위를 냈습니다.\n" );
		break;
	case ROCK:
		printf( "바위를 냈습니다.\n" );
		break;
	case PAPER:
		printf( "보를 냈습니다.\n" );
	}

	return player;
}

// 프로그램시작
int main() {
	int playerA = SCISSOR;
	int playerB = SCISSOR;

	// A양이 가위바위보중 하나를 선택
	printf("\nA양, ");
	playerA = getRockPaperScissors();

	// B군이 가위바위보중 하나를 선택
	printf("\nB군, ");
	playerB = getRockPaperScissors();

	// A양과 B군의 가위바위보 승패 출력
	// 먼저 A양과 B군이 비긴 경우 출력
	if ( playerA == playerB ) {
		printf( "\nA양과 B군이 비겼습니다.\n" );
	}
	// A양이 이긴 경우 출력
	else if ( DoesPlayerAWin( playerA, playerB ) == 1) {
		printf( "\nA양이 이겼습니다.\n" );
	}
	// B군이 이긴 경우 출력
	else {
		printf( "\nB군이 이겼습니다.\n" );
	}

	// 프로그램 종료
	return 0;
}

