// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter04/Time.c

#include <stdio.h>
int main() {
	// 사용자에게 전체 초를 입력받기
	printf( "초를 입력하세요: " );
	int totalSeconds = 0;
	scanf( "%d", &totalSeconds );
	// 전체 초의 시, 분, 초를 계산
	int hours  = totalSeconds / ( 60 * 60 );
	int minutes = ( totalSeconds % ( 60 * 60 ) ) / 60;
	int seconds = totalSeconds % 60;
	// 시, 분, 초를 출력
	printf( "%d초는 %d시간 %d분 %d초입니다.", totalSeconds, hours, minutes, seconds );
	return 0;
}

