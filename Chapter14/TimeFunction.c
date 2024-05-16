// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter14/TimeFunction.c

#include <stdio.h>

// 전체 초를 입력받는 함수
int getTotalSeconds() {
	int totalSeconds = 0;
	// 사용자에게 전체 초를 입력받기
	printf( "초를 입력하세요 : " );
	scanf( "%d", &totalSeconds );
	return totalSeconds;
}

// 시, 분, 초를 계산하는 함수
void calculateTime( int hours, int minutes, int seconds, int totalSeconds ) {
	// 시를 계산
	hours = totalSeconds / ( 60 * 60 );
	// 분을 계산
	minutes = totalSeconds % ( 60 * 60 ) / 60;
	// 초를 계산
	seconds = totalSeconds % 60;
}

// 프로그램 시작
int main() {
	int totalSeconds = 0, hours = 0, minutes = 0, seconds = 0;

	// 전체 초를 입력받기
	totalSeconds = getTotalSeconds();

	// 시, 분, 초를 계산
	calculateTime( hours, minutes, seconds, totalSeconds );

	// 시, 분, 초를 출력
	printf( "%d초는 %d시간 %d분 %d초입니다.", totalSeconds, hours, minutes, seconds );

	// 프로그램 종료
	return 0;
}

