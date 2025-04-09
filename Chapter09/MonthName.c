// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter09/MonthName.c

#include <stdio.h>
int main() {
	// 달을 입력
	printf( "1월 ~ 12월 사이의 월을 입력하세요: " );
	int month = 0;
	scanf( "%d", &month );
	// 입력받은 달의 영어이름을 출력
	char monthName[12][10] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November",  "December" };
	printf( "%d월은 %s입니다", month, monthName[ month - 1 ] );
	return 0;
}

