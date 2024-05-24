// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter15/Map.c

#include <stdio.h>
#include "CharacterMovement.h"
#include "ReadWriteMap.h"

extern char map[100][100];

// 프로그램시작
int main() {
	char direction='w';
	int row = 1, column = 3;
	char filename[1024]="";

	// 먼저 파일에서 맵을 읽고 출력
	printf( "파일이름을 입력해 주세요 : " );
	scanf( "%s", filename );
	readMap( filename );
	writeMap();

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


