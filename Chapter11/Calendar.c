// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter11/Calendar.c

#include <stdio.h>
// 말일 계산 함수
int getLastDay( int year, int month ) {
	// 첫째 1,3,5,7,8,10,12월은 31일
	if ( ( month == 1 ) || ( month == 3 ) || ( month == 5 ) || ( month == 7 ) || ( month == 8 ) || ( month == 10 ) || ( month == 12 ) )
		return 31;
	// 둘째 4,6,9,11월은 30일
	else if ( ( month == 4 ) || ( month == 6 ) || ( month == 9 ) || ( month == 11 ) )
		return 30;
	// 셋째 윤년 2월이면 29일
	else if ( ( month == 2 ) && ( ( ( year % 400 ) == 0 ) || ( ( ( year % 100 ) != 0 ) && ( ( year % 4 ) == 0 ) ) ) )
		return 29;
	// 넷째 평년 2월이면 28일
	else
		return 28;
}
// 전체 날짜 계산 함수
int getTotalDays( int year, int month, int day ) {
	// 1년1월1일부터 작년12월31일까지 날짜 계산
	int totalDays = (year-1)*365 + (year-1)/4 - (year-1)/100 + (year-1)/400;
	// 올해1월1일부터 지난달 말일까지 날짜 계산
	for ( int previousMonth = 1; previousMonth < month; previousMonth++ ) {
		totalDays += getLastDay( year, previousMonth );
	}
	// 이번달 해당날짜까지 계산
	totalDays += day;
	return totalDays;
}
// 달력 출력 함수
void printCalendar( int year, int month, int firstDay, int lastDay ) {
	// 맨 위에 년, 월, 요일을 출력
	printf( "\n              %4d년 %d월           \n\n", year, month );
	printf( "   일   월   화   수   목   금   토\n" );
	// 1일 이전은 공백 출력
	int dayOfWeek=0;
	const int SUNDAY=0, SATURDAY=6;
	for( dayOfWeek = SUNDAY; dayOfWeek < firstDay; dayOfWeek++ ) {
		printf( "     " );
	}
	// 1일부터 말일까지
	for( int day = 1; day <= lastDay; dayOfWeek++, day++ ) {
		// 일주일을 한줄에 출력
		printf( "%5d", day );
		// 즉, 토요일 후 일요일은 새 줄에서 시작
		if ( ( dayOfWeek % 7 ) == SATURDAY ) {
			printf( "\n" );
		}
	}
}
int main() {
	// 년도와 월을 입력
	printf( "년도를 입력하세요: " );
	int year=0;
	scanf( "%d", &year );
	printf( "월을 입력하세요: " );
	int month=0;
	scanf( "%d", &month );
	// 그달 1일의 시작요일 계산하기
	int firstDay = getTotalDays( year, month, 1 ) % 7;
	// 그달 말일을 계산하기
	int lastDay = getLastDay( year, month );
	// 달력을 출력
	printCalendar( year, month, firstDay, lastDay );
	return 0;
}

