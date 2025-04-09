// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter10/RockPaperScissors.c

#include <stdio.h>
#include <string.h>
int main() {
	// A양 가위바위보 선택
	printf( "A양, 가위, 바위, 보 중 하나를 선택하세요: " );
	char playerA[10] = "";
	scanf( "%s", playerA );
	printf( "%s를 냈습니다.\n", playerA );
	// B군 가위바위보 선택
	printf( "B군, 가위, 바위, 보 중 하나를 선택하세요: " );
	char playerB[10] = "";
	scanf( "%s", playerB );
	printf( "%s를 냈습니다.\n", playerB );
	// 가위바위보 승패 출력
	// 먼저 A양과 B군이 같으면 비김
	if ( !strcmp( playerA, playerB ) ) {
		printf( "\nA양과 B군이 비겼습니다.\n" );
	}
	// A양이 가위이고 B군이 보를 낸 경우 A양 승리
	else if ( !strcmp( playerA, "가위" ) && !strcmp( playerB, "보" ) )	 {
		printf( "\nA양이 이겼습니다.\n" );
	}
	// A양이 바위이고 B군이 가위를 낸 경우 A양 승리
	else if ( !strcmp( playerA, "바위" ) && !strcmp( playerB, "가위" ) ) {
		printf( "\nA양이 이겼습니다.\n" );
	}
	// A양이 보이고 B군이 바위를 낸 경우 A양 승리
	else if ( !strcmp( playerA, "보" ) && !strcmp( playerB, "바위" ) ) {
		printf( "\nA양이 이겼습니다.\n" );
	}
	// 나머지 경우 B군 승리
	else {
		printf( "\nB군이 이겼습니다.\n" );
	}
	return 0;
}

