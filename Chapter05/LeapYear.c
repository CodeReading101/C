// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter05/LeapYear.c

#include <stdio.h> 
// 프로그램 시작 
int main() {
	// 년도 초기화
	int year = 0;
	// 사용자가 년도를 입력 
	printf( "년도를 입력하세요: " );
	scanf( "%d", &year );
	// 해당년도가 윤년인지 평년인지 출력 
	// 400으로 나누어 떨어지는 해는 윤년으로 출력 
	if ( ( year % 400 ) == 0 ) {
		printf( "%d년은 윤년입니다.", year );
	}
	// 100으로 나누어 떨어지는 해는 평년으로 출력 
	else if ( ( year % 100 ) == 0 ) {
		printf( "%d년은 평년입니다.", year );
	}
	// 4로 나누어 떨어지는 해는 윤년으로 출력 
	else if ( ( year % 4 ) == 0 ) {
		printf( "%d년은 윤년입니다.", year );
	}
	// 나머지는 평년으로 출력 
	else {
		printf( "%d년은 평년입니다.", year );
	}
	// 프로그램 종료 
	return 0;
}

