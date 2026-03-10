// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter02/WeatherNews.c

#include <stdio.h>
int main() {
	// 주요 날씨 내용을 입력
	printf( "오늘의 기상특보는 무엇인가요: " );
	char weatherReport[16] = "";
	scanf( "%s", weatherReport );
	printf( "오늘의 주의사항은 무엇인가요: " );
	char precaution[16] = "";
	scanf( "%s", precaution );
	printf( "오늘은 무슨 요일인가요: " );
	char week[16] = "";
	scanf( "%s", week );
	printf( "오늘은 몇 월인가요: " );
	int month = 0;
	scanf( "%d", &month );
	printf( "오늘은 며칠인가요: " );
	int day = 0;
	scanf( "%d", &day );
	printf( "서울 최저기온은 몇 도인가요: " );
	int lowSeoul = 0;
	scanf( "%d", &lowSeoul );
	printf( "춘천 최저기온은 몇 도인가요: " );
	int lowChuncheon = 0;
	scanf( "%d", &lowChuncheon );
	printf( "대전 최저기온은 몇 도인가요: " );
	int lowDaejeon = 0;
	scanf( "%d", &lowDaejeon );
	printf( "광주 최저기온은 몇 도인가요: " );
	int lowGwangju = 0;
	scanf( "%d", &lowGwangju );
	printf( "부산 최저기온은 몇 도인가요: " );
	int lowBusan = 0;
	scanf( "%d", &lowBusan );
	printf( "제주 최저기온은 몇 도인가요: " );
	int lowJeju = 0;
	scanf( "%d", &lowJeju );
	printf( "서울 최고기온은 몇 도인가요: " );
	int highSeoul = 0;
	scanf( "%d", &highSeoul );
	printf( "춘천 최고기온은 몇 도인가요: " );
	int highChuncheon = 0;
	scanf( "%d", &highChuncheon );
	printf( "대전 최고기온은 몇 도인가요: " );
	int highDaejeon = 0;
	scanf( "%d", &highDaejeon );
	printf( "광주 최고기온은 몇 도인가요: " );
	int highGwangju = 0;
	scanf( "%d", &highGwangju );
	printf( "부산 최고기온은 몇 도인가요: " );
	int highBusan = 0;
	scanf( "%d", &highBusan );
	printf( "제주 최고기온은 몇 도인가요: " );
	int highJeju = 0;
	scanf( "%d", &highJeju );
	// 날씨 정보를 바탕으로 기상 뉴스를 자동으로 생성
	printf( "%d월 %d일 %s요일 오늘의 날씨입니다. \n", month, day, week );
	printf( "주요 지역의 아침 최저 기온은 서울 %d도, 춘천 %d도, 대전 %d도, 광주 %d도, 부산 %d도, 제주 %d도입니다. \n",
		  lowSeoul, lowChuncheon, lowDaejeon, lowGwangju, lowBusan, lowJeju );
	printf( "낮 최고기온은 서울 %d도, 춘천 %d도, 대전 %d도, 광주 %d도, 부산 %d도, 제주 %d도입니다. \n",
		  highSeoul, highChuncheon, highDaejeon, highGwangju, highBusan, highJeju );
	printf( "%s가 발효중인 지역에서는 %s 운전에 각별히 주의해 주시기 바랍니다. \n", weatherReport, precaution );
	return 0;
}

