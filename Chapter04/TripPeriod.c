// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter04/TripPeriod.c

#include <stdio.h>
int main() {
	// 사용자가 체험학습 시작일을 입력
	printf( "이달 1일부터 31일 중에서 체험학습 시작일을 입력하세요: " );
	int startDate = 0;
	scanf( "%d", &startDate );
	// 사용자가 체험학습 종료일을 입력
	printf( "이달 1일부터 31일 중에서 체험학습 종료일을 입력하세요: " );
	int endDate = 0;
	scanf( "%d", &endDate );
	// 체험학습 기간이 몇박 몇일인지 계산
	int nights = endDate - startDate;
	int days = endDate - startDate + 1;
	// 사용자가 입력한 체험학습 시작일, 종료일, 기간을 출력
	printf( "당신은 체험학습을 %d일부터 %d일까지 %d박%d일 다녀오는군요\n", startDate, endDate, nights, days );
	printf( "뜻 깊고 즐거운 시간 보내시길 바래요 \n" );
	return 0;
}

