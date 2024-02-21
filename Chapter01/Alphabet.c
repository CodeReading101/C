#include <stdio.h> 
// 프로그램 시작 
int main()									
{
	char lowercase = '\0';							
	char uppercase = '\0';							

	// 알파벳 소문자를 입력받기 
	printf("알파벳 소문자 한 글자를 입력하세요: " );
	scanf( "%c", &lowercase );

	// 알파벳 소문자를 대문자로 변환하기 
	uppercase = lowercase - 'a' + 'A';					

	// 입력값 출력하기 
	printf("소문자 %c의 대문자는 %c입니다^^", lowercase, uppercase );	

	// 프로그램 종료 
	return 0;
}

