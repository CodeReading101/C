// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter12/Dictionary.c

#include <stdio.h>
#include <string.h>

// 프로그램시작
int main() {
	char word[1024] = "", meaning[1024] = "";
	FILE *dictionary = NULL;

	// 먼저 영어 단어를 입력
	printf( "영어단어를 입력하세요 : " );
	scanf( "%s", word );
	// 영한 사전을 열기
	if ( ( dictionary = fopen( "dictionary.txt", "rt" ) ) == NULL ) {
		printf( "[오류] 파일을 열 수 없습니다!" );
		return -1;
	}

	// 영한 사전에서 한 줄씩 읽고
	while ( fgets( meaning, 1024, dictionary ) != NULL ) {
		// 해당 영어단어를 찾으면 뜻을 출력
		if ( !strncmp( word,  meaning, strlen( word ) ) ) {
			printf( "%s", meaning );
			break;
		}
	}
	// 영한 사전 닫기
	fclose( dictionary );

	// 프로그램 종료
	return 0;
}

