// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter14/FileCopy.c

//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// 파일 열기
	// 원본 파일 열기
	printf( "원  본 파일이름을 입력하세요: " );
	char inFilename[1024] = "";
	scanf( "%s", inFilename );
	FILE *inFile = NULL;
	if ( ( inFile = fopen( inFilename, "rt" ) ) == NULL ) {
		printf( "[오류] 원본 파일을 열 수 없습니다!" );
		return -1;
	}
	// 복사본 파일 열기
	printf( "복사본 파일이름을 입력하세요: " );
	char outFilename[1024] = "";
	scanf( "%s", outFilename );
	FILE *outFile = NULL;
	if ( ( outFile = fopen( outFilename, "wt" ) ) == NULL ) {
		printf( "[오류] 복사본 파일을 열 수 없습니다!" );
		return -1;
	}
	// 파일 복사
	// 원본 파일 끝까지 한 줄씩 읽기
	for( char line[1024] = ""; fgets( line, 1024, inFile ) != NULL; ) {
		// 복사본 파일에 한 줄씩 쓰기
		printf( "%s\n", line );
		fprintf( outFile, "%s", line );
	}
	// 파일 닫기
	fclose( inFile );
	fclose( outFile );
	return 0;
}

