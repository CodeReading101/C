// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter15/ReadWriteMap.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 전역변수 맵
extern char map[100][100];

// 맵 읽기 함수
int readMap( char *filename ) {
	// 맵 파일 열기
	FILE *inFile = NULL;
	if ( ( inFile = fopen( filename, "rt" ) ) == NULL ) {
		printf( "[오류] 파일을 열 수 없습니다!" );
		return -1;
	}

	// 맵 파일에서 한 줄씩 읽기
	for( int row=0; fgets( map[row], 100, inFile ) != NULL; row++ ) {
		if ( strlen( map[row] ) < 3 ) {
			row--;
		}
	}

	// 맵 파일 닫기
	fclose( inFile );
	return 0;
}

// 맵 쓰기 함수
void writeMap() {
	printf("\033[1;1f                                                                                      \033[1;1f");
	for( int row = 0; map[row][0] != '\0'; row++ ) {
		for( int column = 0; map[row][column] != '\0'; column++ ) {
			// 첫째 Wall이면 벽 출력
			if( map[row][column] == 'W' )
				printf("\033[44m  \033[0m");
			// 둘째 ' '이면 길 출력
			else if( map[row][column] == ' ' )
				printf("  ");
			// 셋째 Exit이면 문 출력
			else if( map[row][column] == 'E' )
				printf("\033[34m문\033[0m");
			// 넷째 Actor이면 옷 출력
			else if( map[row][column] == 'A' )
				printf("\033[31m옷\033[0m");
		}
		printf("\n");
	}
}


