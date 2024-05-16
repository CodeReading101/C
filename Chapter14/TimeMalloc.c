// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter14/TimeMalloc.c

#include <stdio.h>
#include <stdlib.h>

typedef struct _Time {
	int hours;
	int minutes;
	int seconds;
} Time;

// 전체 초를 입력받는 함수
int getTotalSeconds() {
	int totalSeconds = 0;
	// 사용자에게 전체 초를 입력받기
	printf( "초를 입력하세요 : " );
	scanf( "%d", &totalSeconds );
	return totalSeconds;
}

// 시, 분, 초를 계산하는 함수
Time* calculateTime( int totalSeconds ) {
	Time* time = (Time*)malloc( sizeof(Time) );
	// 시를 계산
	time->hours = totalSeconds / ( 60 * 60 );
	// 분을 계산
	time->minutes = totalSeconds % ( 60 * 60 ) / 60;
	// 초를 계산
	time->seconds = totalSeconds % 60;
	return time;
}

// 프로그램 시작
int main() {
	int totalSeconds = 0;
	Time* time = NULL;

	// 전체 초를 입력받기
	totalSeconds = getTotalSeconds();
	// 시, 분, 초를 계산
	time = calculateTime( totalSeconds );

	// 시, 분, 초를 출력
	printf( "%d초는 %d시간 %d분 %d초입니다.", totalSeconds, time->hours, time->minutes, time->seconds );

	// 동적 할당 받은 동전 변수 반납
	free( time );

	// 프로그램 종료
	return 0;
}

