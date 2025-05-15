// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter16/TimeMain.c

#include <stdio.h>
int main() {
	int totalSeconds = 0, hours = 0, minutes = 0, seconds = 0;
	// 전체 초를 입력받기
	printf( "초를 입력하세요: " );
	scanf( "%d", &totalSeconds );
	// 시, 분, 초를 계산
	// 시를 계산
	hours  = totalSeconds / ( 60 * 60 );
	// 분을 계산
	minutes = ( totalSeconds % ( 60 * 60 ) ) / 60;
	// 초를 계산
	seconds = totalSeconds % 60;
	// 시, 분, 초를 출력
	printf( "%d초는 %d시간 %d분 %d초입니다.", totalSeconds, hours, minutes, seconds );
	return 0;
}

