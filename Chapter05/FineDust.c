// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter05/FineDust.c

#include <stdio.h> 
// 프로그램 시작 
int main() {
	int fineDust = 0;
	// 현재 미세먼지 농도를 입력받기  
	printf("0 ~ 200 사이에서 현재 미세먼지 농도를 입력하세요 : " );
	scanf( "%d", &fineDust );

	// 현재 미세먼지 농도가 좋음, 보통, 나쁨, 매우나쁨 중 무엇인지를 출력하기 
	// 현재 미세먼지 농도가 30이하이면 좋음 출력 
	if ( fineDust <= 30 ) {
		printf( "미세먼지 농도는 대부분의 지역이 '좋음' 수준을 보이고 있다 " );
	}
	// 현재 미세먼지 농도가 30 - 80이면 보통 출력  
	else if ( ( 30 < fineDust ) && ( fineDust <= 80 ) ) {
		printf( "미세먼지 농도는 대부분의 지역이 '보통' 수준을 보이고 있다 " );
	}
	// 현재 미세먼지 농도가 80 - 150이면 나쁨 출력  
	else if ( ( 80 < fineDust ) && ( fineDust <= 150 ) ) {
		printf( "미세먼지 농도는 대부분의 지역이 '나쁨' 수준을 보이고 있다 " );
	}
	// 현재 미세먼지 농도가 150보다 높으면 매우나쁨 출력  
	else {
		printf( "미세먼지 농도는 대부분의 지역이 '매우나쁨' 수준을 보이고 있다 " );
	}
	
	// 프로그램 종료 
	return 0;
}

