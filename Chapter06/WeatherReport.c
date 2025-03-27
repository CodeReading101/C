// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter06/WeatherReport.c

#include <stdio.h>
int main() {
	// 현재 기온을 입력받기
	printf( "섭씨 -100도부터 100도 사이에서 현재 기온은 몇 도인가요 : " );
	int temperature = 0;
	scanf( "%d", &temperature );
	// 한파경보, 한파주의보, 폭염경보, 폭염주의보 중 무엇인지를 출력하기
	// 현재 기온이 -15도 이하이면 한파경보 발효
	if (  temperature <= -15 ) {
		printf( "일부 지방에 한파 경보가 발효중입니다. " );
	}
	// 현재 기온이 -13도 이하이면 한파주의보 발효
	else if (  ( -15 < temperature ) && ( temperature <= -13 ) ) {
		printf( "일부 지방에 한파 주의보가 발효중입니다. " );
	}
	// 현재 기온이 35도 이상이면 폭염경보 발효
	else if ( 35 <= temperature ) {
		printf( "일부 지방에 폭염 경보가 발효중입니다. " );
	}
	// 현재 기온이 33도 이상이면 폭염주의보 발효
	else if (  ( 33 <= temperature ) && ( temperature < 35 ) ) {
		printf( "일부 지방에 폭염 주의보가 발효중입니다. " );
	}
	// 나머지의 경우 그나마 살만하다고 출력하기
	else {
		printf( "오늘 날씨는 그나마 살만하네요 " );
	}
	return 0;
}

