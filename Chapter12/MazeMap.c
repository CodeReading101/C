// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter12/MazeMap.c

#include <stdio.h>

char map[10][10] = { '\0' };

// 맵 출력 함수
void printMap() {
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
		}
		printf("\n");
	}
}


// 프로그램시작
int main() {
	// 맵 읽기
	// 맵 파일 열기
	char filename[64] = "";
	FILE *inFile = NULL;

	// 파일 열기
	printf( "파일이름을 입력해 주세요 : " );
	scanf( "%s", filename );
	if ( ( inFile = fopen( filename, "rt" ) ) == NULL ) {
		printf( "[오류] 파일을 열 수 없습니다!" );
		return -1;
	}

	// 맵 파일에서 한 줄씩 읽기
	for( int row=0; fgets( map[row], 10, inFile ) != NULL; row++ );

	// 맵 파일 닫기
	fclose( inFile );

	// 맵 출력
	printMap();

	// 프로그램 종료
	return 0;
}

