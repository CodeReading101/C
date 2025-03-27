// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter06/Letter.c

#include <stdio.h>
int main() {
	// 글자를 입력받기
	printf( "한 글자를 입력하세요: " );
	char letter = '\0';
	scanf( "%c", &letter );
	// 알파벳 소문자, 알파벳 대문자, 숫자, 기호 중 무엇인지를 출력하기
	// 입력값이 알파벳 소문자인 경우 출력하기
	if (  ( 'a' <= letter ) && ( letter <= 'z' ) ) {
		printf( "알파벳 소문자를 입력했군요^^" );
	}
	// 입력값이 알파벳 대문자인 경우 출력하기
	else if (  ( 'A' <= letter ) && ( letter <= 'Z' ) ) {
		printf( "알파벳 대문자를 입력했군요^^" );
	}
	// 입력값이 숫자인 경우 출력하기
	else if (  ( '0' <= letter ) && ( letter <= '9' ) ) {
		printf( "숫자를 입력했군요^^" );
	}
	// 입력값이 기호인 경우 출력하기
	else {
		printf( "기호를 입력했군요^^" );
	}
	return 0;
}

