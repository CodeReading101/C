// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter15/CharacterMovement.c

#include <stdio.h>

extern char map[100][100];

// 맵 이동 함수
void move( char direction, int *row, int *column ) {
	// W는 위로 길 한칸 이동
	if ( ( map[ *row-1 ][ *column ] != 'W' ) && ( ( direction == 'w' ) || ( direction == 'W' ) ) )
		*row = *row-1;
	// A는 왼쪽으로 길 한칸 이동
	else if ( ( map[ *row ][ *column-1 ] != 'W' ) && ( ( direction == 'a' ) || ( direction == 'A' ) ) )
		*column = *column-1;
	// S는 아래로 길 한칸 이동
	else if ( ( map[ *row+1 ][ *column ] != 'W' ) && ( ( direction == 's' ) || ( direction == 'S' ) ) )
		*row = *row+1;
	// D는 오른쪽으로 길 한칸 이동
	else if ( ( map[ *row ][ *column+1 ] != 'W' ) && ( ( direction == 'd' ) || ( direction == 'D' ) ) )
		*column = *column+1;
}

// 게임 종료 확인 함수
int success( char destination ) {
	// Exit에 도착하면 종료
	if( destination == 'E' ) {
		printf("\033[1;1f                              \n          Success!!           \n" );
		for( int row = 0; row < 8; row++ ) {
			printf("                              \n" );
		}
		return 1;
	}
	// 아니면 게임 계속 진행
	else {
		return 0;
	}
}

