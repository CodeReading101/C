// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter11/Alphabet.c

#include <stdio.h>

// 알파벳 소문자 단어를 대문자 단어로 변환하는 함수
void getUppercase( char *uppercase, char *lowercase ) {
	// 알파벳 소문자 단어를 대문자 단어로 변환하기
	for ( int index = 0; lowercase[index] != '\0'; index++ )
		uppercase[index] = lowercase[index] - 'a' + 'A';
}

// 프로그램 시작
int main() {
	char lowercase[10] = { '\0' };
	char uppercase[10] = { '\0' };

	// 알파벳 소문자 단어를 입력받기
	printf("알파벳 소문자 단어를 입력하세요: " );
	scanf( "%s", lowercase );

	// 알파벳 소문자 단어를 대문자 단어로 변환하기
	getUppercase( uppercase, lowercase );

	// 알파벳 소문자 단어와 대문자 단어를 출력하기
	printf("소문자 %s의 대문자는 %s입니다^^", lowercase, uppercase );

	// 프로그램 종료
	return 0;
}

