// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter10/RockPaperScissors.c

#include <stdio.h>

// 가위바위보 입력 함수
int getRockPaperScissors() {
	int player = 0;
	do {
		// 사용자가 가위바위보중 하나를 숫자로 선택
		printf( "가위(1), 바위(2), 보(3) 중 하나를 숫자로 입력하세요: " );
		scanf( "%d", &player );
	} while( ( player != 1 ) && ( player != 2 ) && ( player != 3 ) );

	// 사용자의 입력 숫자를 가위바위보중 하나로 출력
	switch( player ) {
	case 1:
		printf( "가위를 냈습니다.\n" );
		break;
	case 2:
		printf( "바위를 냈습니다.\n" );
		break;
	case 3:
		printf( "보를 냈습니다.\n" );
	}

	return player;
}

// A양이 승리한 경우 확인 함수
int DoesPlayerAWin( int playerA, int playerB ) {
	// A양이 가위이고 B군이 보를 낸 경우 A양이 승리
	if ( ( playerA == 1 ) && ( playerB == 3 ) )
		return 1;
	// A양이 바위이고 B군이 가위를 낸 경우 A양이 승리
	else if ( ( playerA == 2 ) && ( playerB == 1 ) )
		return 1;
	// A양이 보이고 B군이 바위를 낸 경우 A양이 승리
	else if ( ( playerA == 3 ) && ( playerB == 2 ) )
		return 1;
	// 나머지는 B군이 승리
	else
		return 0;
}

// 프로그램 시작
int main() {
	int playerA = 0;
	int playerB = 0;

	// A양 가위바위보 입력
	printf( "A양, " );
	playerA = getRockPaperScissors();
	// B군 가위바위보 입력
	printf( "B군, " );
	playerB = getRockPaperScissors();

	// 가위바위보 승패 출력
	if ( playerA == playerB ) {
		printf( "\nA양과 B군이 비겼습니다.\n" );
	}
	else if ( DoesPlayerAWin( playerA, playerB ) == 1 ) {
		printf( "\nA양이 이겼습니다.\n" );
	}
	else {
		printf( "\nB군이 이겼습니다.\n" );
	}

	// 프로그램 종료
	return 0;
}

