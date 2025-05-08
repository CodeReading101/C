// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter14/DictionaryFile.c

//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	// 먼저, 영한 사전을 준비
	printf( "사전이름을 입력하세요: " );
	char filename[1024] = "";
	scanf( "%s", filename );
	FILE *dictionary = NULL;
	if ( ( dictionary = fopen( filename, "rt" ) ) == NULL ) {
		printf( "[오류] 파일을 열 수 없습니다!" );
		return -1;
	}
	// 영어 단어를 입력
	printf( "영어단어를 입력하세요: " );
	char word[1024] = "";
	scanf( "%s", word );
	// 영한 사전에서 한 줄씩 읽고
	for ( char meaning[1024] = ""; fgets( meaning, 1024, dictionary ) != NULL; ) {
		// 해당 영어단어를 찾으면 뜻을 출력
		if ( !strncmp( word,  meaning, strlen( word ) ) ) {
			printf( "%s\n", meaning );
			break;
		}
	}
	// 영한 사전 닫기
	fclose( dictionary );
	return 0;
}

