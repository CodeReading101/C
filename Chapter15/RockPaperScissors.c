// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter15/RockPaperScissors.c

#include <stdio.h>
// 가위바위보 자료형
typedef enum { SCISSOR = 1, ROCK = 2, PAPER = 3 } RPSGame;
// 논리 자료형
typedef enum { TRUE = 1, FALSE = 0 } Boolean;
// 가위바위보 선택 함수
RPSGame getRockPaperScissors() {
	// 사용자가 가위바위보중 하나를 선택
	printf( "가위(1), 바위(2), 보(3) 중 하나를 숫자로 입력하세요: " );
	int player = ROCK;
	scanf( "%d", &player );
	// 가위바위보 선택 결과를 출력
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
// A양이 승리한 경우 확인 함수
Boolean DoesPlayerAWin( RPSGame playerA, RPSGame playerB ) {
	return
		// A양이 가위이고 B군이 보를 낸 경우
		( ( ( playerA == SCISSOR ) && ( playerB == PAPER ) )
			// A양이 바위이고 B군이 가위를 낸 경우
			|| ( ( playerA == ROCK ) && ( playerB == SCISSOR ) )
			// A양이 보이고 B군이 바위를 낸 경우
			|| ( ( playerA == PAPER ) && ( playerB == ROCK ) ) )
		? TRUE : FALSE;
}
int main() {
	// A양 가위바위보 선택
	printf( "A양, " );
	RPSGame playerA = getRockPaperScissors();
	// B군 가위바위보 선택
	printf( "B군, " );
	RPSGame playerB = getRockPaperScissors();
	// 가위바위보 승패 출력
	// 첫째 A양과 B군이 비김
	if ( playerA == playerB )
		printf( "\nA양과 B군이 비겼습니다.\n" );
	// 둘째 A양이 승리
	else if ( DoesPlayerAWin( playerA, playerB ) == TRUE )
		printf( "\nA양이 이겼습니다.\n" );
	// 셋째 B군이 승리
	else
		printf( "\nB군이 이겼습니다.\n" );
	return 0;
}

