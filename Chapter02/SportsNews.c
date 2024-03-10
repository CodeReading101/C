// C 프로그래밍 - https://codereading101.github.io/C/
// 파일명 - https://github.com/CodeReading101/C/blob/main/Chapter02/SportsNews.c

#include <stdio.h>							

// 프로그램시작 
int main() {
	// 경기 내용을 저장하는 변수 초기화
	char date[16] = "";
	char winningTeam[16] = "";
	char losingTeam[16] = "";
	int  winningPoint = 0;
	int  losingPoint = 0;
	char losingPitcher[16] = "";
	char winningPitcher[16] = "";
	char bestPlayer[16] = "";
	char bestPoint[16] = "";
	int  bestPointScore = 0;
	char missedPlayer[16] = "";
	
	// 주요 경기 내용을 입력 
	printf( "경기일자 : " );					
	scanf( "%s", date );						

	printf( "\n승리팀 : " );					
	scanf( "%s", winningTeam );					
	printf( "패배팀 : " );						
	scanf( "%s", losingTeam );					

	printf( "\n승리점수 : " );					
	scanf( "%d", &winningPoint );					
	printf( "패배점수 : " );					
	scanf( "%d", &losingPoint ); 					

	printf( "\n승리팀 선발투수 : " );				
	scanf( "%s", winningPitcher );			
	printf( "패배팀 선발투수 : " );					
	scanf( "%s", losingPitcher );			

	printf( "\n승리팀 맹활약 선수 : " );				
	scanf( "%s", bestPlayer );					
	printf( "맹활약 시점 : " );					
	scanf( "%s", bestPoint );					
	printf( "맹활약 시 뽑아낸 점수 : " );				
	scanf( "%d", &bestPointScore );				
	printf( "공략못한 선수 : " );					
	scanf( "%s", missedPlayer );					
	
	// 입력된 주요 경기 내용을 바탕으로 스포츠 신문기사 자동 생성 
	printf( "\n\n%s는 %s일 열린 프로야구 %s와의 홈 경기에서 %d - %d점으로 크게 패하며 ",	
	  losingTeam, date, winningTeam, losingPoint, winningPoint );
	printf( "홈 팬들을 실망시켰습니다. %s는 %s을 선발로 등판시켰고 %s는 %s가 나섰습니다. ", 	
	  losingTeam, losingPitcher, winningTeam, winningPitcher );
	printf( "%s는 %s이 맹활약을 펼쳤습니다. %s은 %s에 맞이한 타석에서 %d점을 뽑아내며, ", 	
	  winningTeam, bestPlayer, bestPlayer, bestPoint, bestPointScore );
	printf( "%s의 %d점차 승리를 이끈 일등공신이 됐습니다. %s는 %s을 끝까지 공략하지 못하며 ", 	
	  winningTeam, ( winningPoint - losingPoint ), losingTeam, missedPlayer );
	printf( "안방에서 %s에 %d점차 승리를 내주었습니다.", 					
	  winningTeam, ( winningPoint - losingPoint ) );

	// 프로그램 종료 
	return 0;
}

