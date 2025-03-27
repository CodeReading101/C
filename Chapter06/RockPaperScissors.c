// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter06/RockPaperScissors.c

#include <stdio.h>
int main() {
	// A양 가위바위보 선택
	printf( "A양, 가위(1), 바위(2), 보(3) 중 하나를 숫자로 입력하세요: " );
	int playerA = 0;
	scanf( "%d", &playerA );
	switch( playerA ) {
	case 1:
		printf( "가위를 냈습니다.\n" );
		break;
	case 2:
		printf( "바위를 냈습니다.\n" );
		break;
	case 3:
		printf( "보를 냈습니다.\n" );
	}
	// B군 가위바위보 선택
	printf( "B군, 가위(1), 바위(2), 보(3) 중 하나를 숫자로 입력하세요: " );
	int playerB = 0;
	scanf( "%d", &playerB );
	switch( playerB ) {
	case 1:
		printf( "가위를 냈습니다.\n" );
		break;
	case 2:
		printf( "바위를 냈습니다.\n" );
		break;
	case 3:
		printf( "보를 냈습니다.\n" );
	}
	// 가위바위보 승패 출력
	// 먼저 A양과 B군이 같으면 비김
	if ( playerA == playerB ) {
		printf( "\nA양과 B군이 비겼습니다.\n" );
	}
	// A양이 가위이고 B군이 보를 낸 경우 A양 승리
	else if ( ( playerA == 1 ) && ( playerB == 3 ) ) {
		printf( "\nA양이 이겼습니다.\n" );
	}
	// A양이 바위이고 B군이 가위를 낸 경우 A양 승리
	else if ( ( playerA == 2 ) && ( playerB == 1 ) ) {
		printf( "\nA양이 이겼습니다.\n" );
	}
	// A양이 보이고 B군이 바위를 낸 경우 A양 승리
	else if ( ( playerA == 3 ) && ( playerB == 2 ) ) {
		printf( "\nA양이 이겼습니다.\n" );
	}
	// 나머지 경우 B군 승리
	else {
		printf( "\nB군이 이겼습니다.\n" );
	}
	return 0;
}

