// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter12/SportsNews.c

#include <stdio.h>

// 프로그램시작
int main() {
	char date[1024]="", winningTeam[1024]="", losingTeam[1024]="";
	int  winningPoint=0, losingPoint=0, bestPointScore=0;
	char winningPitcher[1024]="", losingPitcher[1024]="";
	char bestPlayer[1024]="", bestPlayPoint[1024]="", missedPlayer[1024]="";
	char filename[1024]="", line[1024]="";
	FILE *inFile = NULL;

	printf( "파일이름을 입력해 주세요 : " );
	scanf( "%s", filename );

	// 야구 경기 정보 파일 열기
	if ( ( inFile = fopen( filename, "rt" ) ) == NULL ) {
		printf( "[오류] 파일을 열 수 없습니다!" );
		return -1;
	}
	// 파일에서 한 경기씩 주요 경기 내용을 추출하기
	while ( fgets( line, 1024, inFile ) != NULL ) {
		if( sscanf( line, "%s\t%s\t%s\t%d\t%d\t%s\t%s\t%s\t%s\t%d\t%s\n",
			date, winningTeam, losingTeam, &winningPoint, &losingPoint,
			winningPitcher, losingPitcher,
			bestPlayer, bestPlayPoint, &bestPointScore, missedPlayer ) == 0 ) {
			printf( "[오류] 한 경기씩 주요 경기 내용 읽어올 수 없습니다." );
			break;
		}

		// 추출한 내용을 바탕으로 스포츠 기사 자동 생성
		printf( "\n\n( %s %d : %s %d )\n",
			losingTeam, losingPoint, winningTeam, winningPoint );
		printf( "%s는 %s일 열린 프로야구 %s와의 홈 경기에서 %d-%d점으로 크게 패하며 ",
			losingTeam, date, winningTeam, losingPoint, winningPoint );
		printf( "홈 팬들을 실망시켰다. \n%s는 %s을 선발로 등판시켰고 %s는 %s가 나섰다. ",
		 losingTeam, losingPitcher, winningTeam, winningPitcher );
		printf( "%s는 %s이 맹활약을 펼쳤다. \n%s은 %s에 맞이한 타석에서 %d점을 뽑아내며, ",
			winningTeam, bestPlayer, bestPlayer, bestPlayPoint, bestPointScore );
		printf( "%s의 %d점차 승리를 이끈 일등공신이 됐다. \n%s는 %s을 끝까지 공략하지 못하며 ",
			winningTeam, ( winningPoint - losingPoint ), losingTeam, missedPlayer );
		printf( "안방에서 %s에 %d점차 승리를 내주었다.", winningTeam, ( winningPoint - losingPoint ) );
	}

	// 야구 경기 정보 파일 닫기
	fclose( inFile );

	// 프로그램 종료
	return 0;
}

