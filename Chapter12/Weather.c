// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter12/Weather.c

#include <stdio.h>

// 프로그램시작
int main() {
	char month[1024]="", day[1024]="", week[1024]="", weatherReport[1024]="", precaution[1024]="";
	int  lowSeoul =0, lowChuncheon =0, lowDaejeon =0, lowGwangju =0, lowBusan =0, lowJeju =0;
	int  highSeoul=0, highChuncheon=0, highDaejeon=0, highGwangju=0, highBusan=0, highJeju=0;
	char filename[1024] = "", line[1024] = "";
	FILE *inFile = NULL;

	// 날씨 정보 파일 열기
	printf( "파일이름을 입력해 주세요 : " );
	scanf( "%s", filename );
	if ( ( inFile = fopen( filename, "rt" ) ) == NULL ) {
		printf( "[오류] 파일을 열 수 없습니다!" );
		return -1;
	}
	// 파일에서 날짜별 날씨 정보를 추출하기
	while ( fgets( line, 1024, inFile ) != NULL ) {
		if( sscanf( line, "%s %s %s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
			month, day, week, weatherReport, precaution,
			&lowSeoul, &lowChuncheon, &lowDaejeon, 	&lowGwangju, &lowBusan, &lowJeju,
			&highSeoul, &highChuncheon, &highDaejeon, &highGwangju, &highBusan, &highJeju ) == 0 ) {
			printf( "[오류] 한 경기씩 주요 경기 내용 읽어올 수 없습니다." );
			break;
		}
		// 추출한 정보를 바탕으로 날씨 기사를 자동으로 생성
		printf("\n%s월 %s일 %s요일, 아침 날씨입니다.", month, day, week );
		printf("\n아침 최저기온은 서울 %d도, 춘천 %d도, 대전 %d도, 광주 %d도, 부산 %d도, 제주 %d도로 예상됩니다.",
			  lowSeoul, lowChuncheon, lowDaejeon, lowGwangju, lowBusan, lowJeju );
		printf("\n낮 최고기온은 서울 %d도, 춘천 %d도, 대전 %d도, 광주 %d도, 부산 %d도, 제주 %d도로 예상됩니다.",
			  highSeoul, highChuncheon, highDaejeon, highGwangju, highBusan, highJeju );
		printf("\n일부 지방에 %s가 발효중입니다. 출근길 %s 운전에 유의해야 합니다.",
			  weatherReport, precaution );
		printf("\n이상 날씨였습니다.\n웨더봇 기자" );
	}
	// 날씨 정보 파일 닫기
	fclose( inFile );

	// 프로그램 종료
	return 0;
}

