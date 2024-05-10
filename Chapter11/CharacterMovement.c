// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter11/CharacterMovement.c

#include <stdio.h>

char map[7][9] = { { 'W','W','W','W','W','W','W','W','W' },
                   { 'W',' ',' ',' ','W',' ',' ',' ','E' },
                   { 'W','W','W',' ','W',' ','W','W','W' },
                   { 'W',' ',' ',' ','W',' ',' ',' ','W' },
                   { 'W',' ','W','W','W','W','W',' ','W' },
                   { 'W',' ',' ',' ',' ',' ',' ',' ','W' },
                   { 'W','W','W','W','W','W','W','W','W' }
                 };

// 맵 출력 함수
void printMap() {
	for( int row = 0; row < 7; row++ ) {
		for( int column = 0; column < 9; column++ ) {
			// 첫째 Wall이면 벽 출력
			if( map[row][column] == 'W' )
				printf("\033[44m  \033[0m");
			// 둘째 ' '이면 길 출력
			else if( map[row][column] == ' ' )
				printf("  ");
			// 셋째 Exit이면 문 출력
			else if( map[row][column] == 'E' )
				printf("\033[34m문\033[0m");
		}
		printf("\n");
	}
}

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

// 프로그램시작
int main() {
	char direction='w';
	int row = 1, column = 3;

	// 먼저 맵 출력
	printMap();

	do {
		// 캐릭터를 기존 위치에서 지우고 이동한 새 위치에 출력
		printf("\033[%d;%df  ", row+1, column*2+1 );
		move( direction, &row, &column );
		printf("\033[%d;%df옷", row+1, column*2+1 );

		// 게임 종료 확인
		if( success( map[ row ][ column ] ) == 1 ) {
			break;
		}

		// 게임 종료 아니면 새 이동 방향 입력 받아서 게임 계속 진행
		printf("\033[10;1fWASD와[Enter]를 입력하세요:         \033[10;29f" );
		scanf("\n%c",&direction);

	} while( (direction=='W')||(direction=='A')||(direction=='S')||(direction=='D')
	         ||(direction=='w')||(direction=='a')||(direction=='s')||(direction=='d') );

	// 프로그램 종료
	return 0;
}

