// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter14/WeatherFile.c

//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// 날씨 정보 파일 열기
	printf( "파일이름을 입력하세요: " );
	char filename[1024] = "";
	scanf( "%s", filename );
	FILE *inFile = NULL;
	if ( ( inFile = fopen( filename, "rt" ) ) == NULL ) {
		printf( "[오류] 파일을 열 수 없습니다!" );
		return -1;
	}
	// 파일에서 날짜별 날씨 정보를 추출하기
	while ( !feof( inFile ) ) {
		char month[1024]="", day[1024]="", week[1024]="", weatherReport[1024]="", precaution[1024]="";
		int lowSeoul = 0, lowChuncheon = 0, lowDaejeon = 0, lowGwangju = 0, lowBusan = 0, lowJeju = 0;
		int highSeoul= 0, highChuncheon= 0, highDaejeon= 0, highGwangju= 0, highBusan= 0, highJeju= 0;
		if( fscanf( inFile, "%s\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
			month, day, week, weatherReport, precaution,
			&lowSeoul, &lowChuncheon, &lowDaejeon, &lowGwangju, &lowBusan, &lowJeju,
			&highSeoul, &highChuncheon, &highDaejeon, &highGwangju, &highBusan, &highJeju ) < 17 ) {
			printf( "(오류) 날짜별 날씨 정보을 읽어올 수 없습니다." );
			break;
		}
		// 추출한 정보를 바탕으로 날씨 기사를 자동으로 생성
		printf( "%s월 %s일 %s요일, 아침 날씨입니다.\n", month, day, week );
		printf( "아침 최저기온은 서울 %d도, 춘천 %d도, 대전 %d도, 광주 %d도, 부산 %d도, 제주 %d도로 예상됩니다.\n",
			  lowSeoul, lowChuncheon, lowDaejeon, lowGwangju, lowBusan, lowJeju );
		printf( "낮 최고기온은 서울 %d도, 춘천 %d도, 대전 %d도, 광주 %d도, 부산 %d도, 제주 %d도로 예상됩니다.\n",
			  highSeoul, highChuncheon, highDaejeon, highGwangju, highBusan, highJeju );
		printf( "일부 지방에 %s가 발효중입니다. 출근길 %s 운전에 유의해야 합니다.\n\n", weatherReport, precaution );
	}
	// 날씨 정보 파일 닫기
	fclose( inFile );
	return 0;
}

