// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter15/DateTime.c

#include <stdio.h>
// 날짜 구조체 정의
typedef struct {
	int year;
	int month;
	int day;
} Date;
// 시간 구조체 정의
typedef struct {
	int hour;
	int minute;
	int second;
} Time;
// 날짜 및 시간 구조체 정의
typedef struct {
	Date  date;
	Time  time;
} DateTime;
int main() {
	// 구조체 변수 초기화
	DateTime now = { { 0, 0, 0 }, { 0, 0, 0 } };
	// 현재 시간을 입력
	printf( "올해를 입력하세요: " );
	scanf( "%d", &now.date.year );
	printf( "이번달을 입력하세요: " );
	scanf( "%d", &now.date.month );
	printf( "오늘을 입력하세요: " );
	scanf( "%d", &now.date.day );
	printf( "현재 시간을 입력하세요: " );
	scanf( "%d", &now.time.hour );
	printf( "현재 분을 입력하세요: " );
	scanf( "%d", &now.time.minute );
	printf( "현재 초를 입력하세요: " );
	scanf( "%d", &now.time.second );
	// 현재 시간을 출력
	printf( "현재 시간은 %d년 %d월 %d일 %d시 %d분 %d초입니다", now.date.year, now.date.month, now.date.day, now.time.hour, now.time.minute, now.time.second);
	return 0;
}

