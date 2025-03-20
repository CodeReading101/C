// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter03/LowercaseToUppercase.c

#include <stdio.h>
int main() {
	// 알파벳 소문자를 입력받기
	printf( "알파벳 소문자 한 글자를 입력하세요: " );
	char lowercase = '\0';
	scanf( "%c", &lowercase );
	// 알파벳 소문자를 대문자로 변환하기
	char uppercase = (char)( (int) lowercase - (int) 'a' + (int) 'A' );
	// 입력값 출력하기
	printf( "소문자 %c의 대문자는 %c입니다^^", lowercase, uppercase );
	return 0;
}

