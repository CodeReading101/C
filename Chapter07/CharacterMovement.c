// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter07/CharacterMovement.c

#include <stdio.h>
int main() {
	// 맵 출력
	int row = 0, column = 9;
	printf( "\033[44m                 \033[0m" );
	while( ++row < 8 )
		printf( "\n\033[44m  \033[0m             \033[44m  \033[0m" );
	printf( "\n\033[44m                 \033[0m" );
	// 입력 방향에 따라 캐릭터 이동시키기
	char direction = 'w';
	do {
		// 캐릭터의 기존 위치 지우고 새 위치로 업데이트
		printf( "\033[%d;%df  ", row, column);
		switch( direction ) {
			// W는 위로 이동
			case 'w': case 'W':
				row = ( row <= 2 ) ? 2 : row - 1;
				break;
			// A는 왼쪽으로 이동
			case 'a': case 'A':
				column = ( column <= 3 ) ? 3 : column - 1;
				break;
			// S는 아래로 이동
			case 's': case 'S':
				row = ( 8 <= row ) ? 8 : row + 1;
				break;
			// D는 오른쪽으로 이동
			case 'd': case 'D':
				column = ( 14 <= column ) ? 14 : column + 1;
				break;
		}
		printf( "\033[%d;%df옷", row, column );
		// 캐릭터의 다음 이동 방향 입력 받기
		printf( "\033[10;1f\033[2K방향키(WASD)를 입력하세요: " );
		scanf( "\n%c", &direction );
	} while( ( direction == 'W' ) || ( direction == 'A' ) || ( direction == 'S' ) || ( direction == 'D' )
	        || ( direction == 'w' ) || ( direction == 'a' ) || ( direction == 's' ) || ( direction == 'd' ) );
	return 0;
}

