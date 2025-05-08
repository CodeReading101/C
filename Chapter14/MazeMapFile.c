// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter14/MazeMapFile.c

//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	// 파일에서 맵 읽기
	// 맵 파일 열기
	printf("파일이름을 입력하세요: ");
	char filename[1024] = "";
	scanf( "%s", filename );
	FILE *inFile = NULL;
	if ( ( inFile = fopen( filename, "rt" ) ) == NULL ) {
		printf( "[오류] 파일을 열 수 없습니다!" );
		return -1;
	}
	// 맵 파일에서 한 줄씩 읽기
	int map[100][100] = { 0 };
	int height = 0, width = 0;
	for( char line[1024] = ""; fgets( line, 100, inFile ) != NULL; height++ ) {
		if ( strlen( line ) < 3 ) {
			break;
		}
		else {
			for( width = 0; ( width < strlen( line ) ) && ( '0' <= line[width] ) && ( line[width] <= '9' ); width++ )
				map[height][width] = line[width] - '0';
		}
	}
	// 맵 파일 닫기
	fclose( inFile );
	// 맵 출력
	char symbol[10][1024] = { "  ", "\033[44m  \033[0m", "옷", "\033[34m문\033[0m", "\033[31m♥\033[0m", "\033[33m★\033[0m", "\033[32m♣\033[0m", "\033[31m♠\033[0m", "\033[36m◆\033[0m", "\033[35m■\033[0m" };
	for( int row = 0; row < height; row++ ) {
		for( int column = 0; column < width; column++ )
			printf( "%s", symbol[ map[row][column] ] );
		printf( "\n" );
	}
	return 0;
}

