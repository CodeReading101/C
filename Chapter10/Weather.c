// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter10/Weather.c

#include <stdio.h>
#include <string.h>
int main() {
	char weatherReport[32] = "";
	char newsMessage[1024] = "";
	// 기상 특보를 입력받기
	printf( "오늘의 기상 특보를 입력하세요: " );
	scanf( "%s", weatherReport );
	// 날씨 뉴스 기사 생성
	printf( "일부 지방에 %s가 발효중입니다. \n", weatherReport );
	strcpy( newsMessage, "출근길 " );
	// 대설특보는 눈길 운전 조심을 출력
	if ( !strcmp( weatherReport, "대설특보" ) ) {
		strcat( newsMessage, "눈길 " );
	}
	// 호우특보는 빗길 운전 조심을 출력
	else if ( !strcmp( weatherReport, "호우특보" ) ) {
		strcat( newsMessage, "빗길 " );
	}
	// 강풍주의보는 안전 운전 조심을 출력
	else if ( !strcmp( weatherReport, "강풍주의보" ) ) {
		strcat( newsMessage, "안전 " );
	}
	strcat( newsMessage, "운전에 유의해야 합니다." );
	// 날씨 뉴스 기사 출력
	printf( "%s", newsMessage );
	return 0;
}

