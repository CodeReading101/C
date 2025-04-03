// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter07/ValidRockPaperScissors.c

#include <stdio.h>
int main() {
	int player = 0;
	do {
		// 사용자가 가위바위보중 하나를 선택
		printf( "가위(1), 바위(2), 보(3) 중 하나를 숫자로 입력하세요: " );
		scanf( "%d", &player );
	// 사용자가 가위바위보를 잘못 입력하면 다시 선택
	} while ( ( player != 1 ) && ( player != 2 ) && ( player != 3 ) );
	// 사용자가 선택한 결과를 출력
	printf( "%d를 냈습니다.\n", player );
	return 0;
}

