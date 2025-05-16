// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter16/TimeMain.c

#include <stdio.h>
int main() {
	// 전체 초를 입력받기
	printf( "초를 입력하세요: " );
	int totalSeconds = 0;
	scanf( "%d", &totalSeconds );
	// 시, 분, 초를 계산
	// 시를 계산
	int hours  = totalSeconds / ( 60 * 60 );
	// 분을 계산
	int minutes = ( totalSeconds % ( 60 * 60 ) ) / 60;
	// 초를 계산
	int seconds = totalSeconds % 60;
	// 시, 분, 초를 출력
	printf( "%d초는 %d시간 %d분 %d초입니다.", totalSeconds, hours, minutes, seconds );
	return 0;
}

