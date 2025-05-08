// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter13/CharacterMovement.c

//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 맵 출력 함수
void printMap( int map[7][9] ) {
	// 길, 벽, 옷, 문의 출력값 설정
	char symbol[10][1024] = { "  ", "\033[44m  \033[0m", "\033[34m문\033[0m" };
	printf("\033[2K\033[2;1f");
	// 2차원 미로 맵을 한 칸씩 출력
	for ( int row = 0; row < 7; row++ ) {
		for ( int column = 0; column < 9; column++ )
			printf( "%s", symbol[map[row][column]] );
		printf( "\n" );
	}
}
// 맵 이동 함수
void move( char direction, int *row, int *column, int map[7][9] ) {
	// W는 길 위쪽으로 한칸 이동
	if ( ( ( direction == 'w' ) || ( direction == 'W' ) ) && ( *row > 0 ) && ( map[ *row-1 ][ *column ] != 1 ) )
		*row = *row-1;
	// A는 길 왼쪽으로 한칸 이동
	else if ( ( ( direction == 'a' ) || ( direction == 'A' ) ) && ( *column > 0 ) && ( map[ *row ][ *column-1 ] != 1 ) )
		*column = *column-1;
	// S는 길 아래쪽으로 한칸 이동
	else if ( ( ( direction == 's' ) || ( direction == 'S' ) ) && ( *row < 6 ) && ( map[ *row+1 ][ *column ] != 1 ) )
		*row = *row+1;
	// D는 길 오른쪽으로 한칸 이동
	else if ( ( ( direction == 'd' ) || ( direction == 'D' ) ) && ( *column < 8 ) && ( map[ *row ][ *column+1 ] != 1 ) )
		*column = *column+1;
}
// 게임 종료 확인 함수
int finish( int here ) {
	// 목적지에 도착하면 종료
	if( here == 2 ) {
		printf( "\033[2J\033[4;15fSUCCESS!\033[7;15f" );
		return 1;
	}
	// 아니면 게임 계속 진행
	else {
		return 0;
	}
}
int main() {
	int map[7][9] = {
	                       { 1,1,1,1,1,1,1,1,1 },
	                       { 1,0,0,0,1,0,0,0,2 },
	                       { 1,1,1,0,1,0,1,1,1 },
	                       { 1,0,0,0,1,0,0,0,1 },
	                       { 1,0,1,1,1,1,1,0,1 },
	                       { 1,0,0,0,0,0,0,0,1 },
	                       { 1,1,1,1,1,1,1,1,1 }
	                      };
	// 먼저 맵 출력
	printMap( map );
	char direction='w';
	int row = 1, column = 3;
	do {
		// 캐릭터를 기존 위치에서 지우고 이동한 새 위치에 출력
		printf( "\033[%d;%df  ", row+2, column*2+1 );
		move( direction, &row, &column, map );
		printf( "\033[%d;%df옷", row+2, column*2+1 );
		// 게임 종료 확인
		if( finish( map[row][column] ) == 1 ) {
			break;
		}
		// 게임 종료 아니면 새 이동 방향 입력 받아서 게임 계속 진행
		printf( "\033[1;1f\033[2KWASD와[Enter]를 입력하세요: " );
		scanf( "\n%c", &direction);
	} while( (direction=='W')||(direction=='A')||(direction=='S')||(direction=='D')
	         ||(direction=='w')||(direction=='a')||(direction=='s')||(direction=='d') );
	return 0;
}

