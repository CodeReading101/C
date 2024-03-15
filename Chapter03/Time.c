// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter03/Time.c

#include <stdio.h>

// 프로그램 시작 
int main() {
	int totalSeconds=0, temp=0;						
	int hours=0, minutes=0, seconds=0;					

	// 사용자에게 전체 초를 입력받기 
	printf( "초를 입력하세요 : " );
	scanf( "%d", &totalSeconds ); 							
	temp = totalSeconds;								

	// 시, 분, 초를 계산 
	// 전체 초가 몇 시간인지 계산 
	hours  = temp / ( 60 * 60 );							

	// 남은 시간 재조정
	temp = temp % ( 60 * 60 );							

	// 남은 시간이 몇 분인지 계산 
	minutes = temp / 60;								

	// 남은 시간이 몇 초인지 계산 
	seconds = temp % 60;								

	// 시, 분, 초를 출력 
	printf( "%d초는 %d시간 %d분 %d초입니다.", totalSeconds, hours, minutes, seconds );

	// 프로그램 종료 
	return 0;
}

