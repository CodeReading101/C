// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter16/TimeStruct.c

#include <stdio.h>
// 시간 정보 구조체 정의
typedef struct {
	int hours;
	int minutes;
	int seconds;
} Time;
// 전체 초를 입력받는 함수
int getTotalSeconds() {
	// 사용자에게 전체 초를 입력받기
	printf( "초를 입력하세요: " );
	int totalSeconds = 0;
	scanf( "%d", &totalSeconds );
	return totalSeconds;
}
// 시, 분, 초를 계산하는 함수
Time calculateTime( int totalSeconds ) {
	Time time = { 0, 0, 0 };
	// 시를 계산
	time.hours = totalSeconds / ( 60 * 60 );
	// 분을 계산
	time.minutes = totalSeconds % ( 60 * 60 ) / 60;
	// 초를 계산
	time.seconds = totalSeconds % 60;
	return time;
}
int main() {
	// 전체 초를 입력받기
	int totalSeconds = getTotalSeconds();
	// 시, 분, 초를 계산
	Time time = calculateTime( totalSeconds );
	// 시, 분, 초를 출력
	printf( "%d초는 %d시간 %d분 %d초입니다", totalSeconds, time.hours, time.minutes, time.seconds );
	return 0;
}

