// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter13/Alphabet.c

//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 알파벳 소문자 단어를 대문자 단어로 변환하는 함수
void getUppercase( char *uppercase, char *lowercase ) {
	// 알파벳 소문자 단어를 대문자 단어로 변환하기
	for ( int index = 0; lowercase[index] != '\0'; index++ )
		uppercase[index] = lowercase[index] - 'a' + 'A';
}
int main() {
	char lowercase[32] = { '\0' }, uppercase[32] = { '\0' };
	// 알파벳 소문자 단어를 입력받기
	printf( "알파벳 소문자 단어를 입력하세요: " );
	scanf( "%s", lowercase );
	// 알파벳 소문자 단어를 대문자 단어로 변환하기
	getUppercase( uppercase, lowercase );
	// 알파벳 소문자 단어와 대문자 단어를 출력하기
	printf( "소문자 %s의 대문자는 %s입니다^^", lowercase, uppercase );
	return 0;
}

