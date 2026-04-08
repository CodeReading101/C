// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter10/Weather.c

#include <stdio.h>
#include <string.h>
int main() {
	// 기상 특보를 입력받기
	printf( "오늘의 기상 특보를 입력하세요: " );
	char weather[32] = "";
	scanf( "%s", weather );
	printf( "현재 %s가 발효중이니 ", weather );
	// 주의사항 생성 후 출력
	// 첫째, 대설특보는 눈길 운전 주의
	char precaution[1024] = "";
	if ( !strcmp( weather, "대설특보" ) ) {
		strcpy( precaution, "눈길 " );
	}
	// 둘째, 호우특보는 빗길 운전 주의
	else if ( !strcmp( weather, "호우특보" ) ) {
		strcpy( precaution, "빗길 " );
	}
	// 셋째, 강풍주의보는 안전 운전 주의
	else if ( !strcmp( weather, "강풍주의보" ) ) {
		strcpy( precaution, "안전 " );
	}
	strcat( precaution, "운전에 각별히 주의해 주시기 바랍니다" );
	printf( "%s", precaution );
	return 0;
}

