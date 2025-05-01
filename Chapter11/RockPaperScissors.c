// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter11/RockPaperScissors.c

#include <stdio.h>
// 가위바위보 선택 함수
int getRockPaperScissors() {
	// 사용자가 가위바위보중 하나를 선택
	printf( "가위(1), 바위(2), 보(3) 중 하나를 숫자로 입력하세요: " );
	int player = 0;
	scanf( "%d", &player );
	// 가위바위보 선택 결과를 출력
	switch( player ) {
	case 1 :
		printf( "가위를 냈습니다.\n" );
		break;
	case 2 :
		printf( "바위를 냈습니다.\n" );
		break;
	case 3 :
		printf( "보를 냈습니다.\n" );
	}
	return player;
}
// A양이 승리한 경우 확인 함수
int DoesPlayerAWin( int playerA, int playerB ) {
	return ( ( ( playerA == 1 ) && ( playerB == 3 ) ) || ( ( playerA == 2 ) && ( playerB == 1 ) ) || ( ( playerA == 3 ) && ( playerB == 2 ) ) ) ? 1 : 0;
}
int main() {
	// A양 가위바위보 선택
	printf( "A양, " );
	int playerA = getRockPaperScissors();
	// B군 가위바위보 선택
	printf( "B군, " );
	int playerB = getRockPaperScissors();
	// 가위바위보 승패 출력
	// 첫째 A양과 B군이 비김
	if ( playerA == playerB )
		printf( "\nA양과 B군이 비겼습니다.\n" );
	// 둘째 A양이 승리
	else if ( DoesPlayerAWin( playerA, playerB ) == 1 )
		printf( "\nA양이 이겼습니다.\n" );
	// 셋째 B군이 승리
	else
		printf( "\nB군이 이겼습니다.\n" );
	return 0;
}

