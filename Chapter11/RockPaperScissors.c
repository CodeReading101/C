// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter11/RockPaperScissors.c

#include <stdio.h>
#include <string.h>

// 가위바위보 선택 함수
void getRockPaperScissors( char *player ) {
	do {
		// 사용자가 가위바위보중 하나를 선택
		printf( "가위, 바위, 보 중 하나를 선택하세요: " );
		scanf( "%s", player );
	} while( strcmp( player, "가위" ) && strcmp( player, "바위" ) && strcmp( player, "보" ) );

	// 가위바위보 선택 결과를 출력
	printf( "%s를 냈습니다.\n", player );
}
// A양이 승리한 경우 확인 함수
int DoesPlayerAWin( char *playerA, char *playerB ) {
	// A양이 가위이고 B군이 보를 낸 경우
	if ( ( !strcmp( playerA, "가위" ) && !strcmp( playerB, "보" ) )
	     // A양이 바위이고 B군이 가위를 낸 경우
	     || ( !strcmp( playerA, "바위" ) && !strcmp( playerB, "가위" ) )
	     // A양이 보이고 B군이 바위를 낸 경우
	     || ( !strcmp( playerA, "보" ) && !strcmp( playerB, "바위" ) ) )
		return 1;
	else
		return 0;
}


// 프로그램 시작
int main() {
	char playerA[10] = "";
	char playerB[10] = "";

	// A양 가위바위보 입력
	printf( "A양, " );
	getRockPaperScissors( playerA );

	// B군 가위바위보 입력
	printf( "B군, " );
	getRockPaperScissors( playerB );

	// 가위바위보 승패 출력
	// 첫째 A양과 B군이 비김
	if ( !strcmp( playerA, playerB ) )
		printf( "\nA양과 B군이 비겼습니다.\n" );
	// 둘째 A양이 승리
	else if ( DoesPlayerAWin( playerA, playerB ) == 1 )
		printf( "\nA양이 이겼습니다.\n" );
	// 셋째 B군이 승리
	else
		printf( "\nB군이 이겼습니다.\n" );

	// 프로그램 종료
	return 0;
}

