// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter12/FileCopy.c

#include <stdio.h>

// 프로그램시작
int main() {
	char line[1024] = "";

	// 파일 열기
	FILE *inFile = NULL;
	FILE *outFile = NULL;
	if (((inFile=fopen("original.txt","rt"))==NULL )||((outFile=fopen("copy.txt","wt"))==NULL)) {
		printf( "[오류] 파일을 열 수 없습니다!" );
		return -1;
	}
	// 원본 파일 끝까지 한 줄씩 읽기
	while ( fgets( line, 1024, inFile ) != NULL ) {
		// 복사본 파일에 한 줄씩 쓰기
		fprintf( outFile, "%s", line );
	}
	// 파일 닫기
	fclose( inFile );
	fclose( outFile );

	// 프로그램 종료
	return 0;
}

