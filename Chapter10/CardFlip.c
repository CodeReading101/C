// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter10/CardFlip.c

#include <stdio.h>

int output[4][4] = {{ 11, 12, 13, 14 },
	                  { 21, 22, 23, 24 },
	                  { 31, 32, 33, 34 },
	                  { 41, 42, 43, 44 } };
int color[4][4] = { { 0, 1, 2, 7 },
	                  { 3, 5, 6, 0 },
	                  { 2, 4, 6, 3 },
	                  { 4, 5, 1, 7 } };

// 카드 게임 현황 출력 함수
void printGameBoard( int card1Row, int card1Column, int card2Row, int card2Column ){
	for( int row = 0; row < 4; row++ ) {
		for( int column = 0; column < 4; column++ ) {
			// 사용자가 선택한 카드이거나 이미 색깔을 맞춘 카드는 색깔 출력
			if( ( output[row][column] <= 7 )
				   || ( ( row == card1Row ) && ( column == card1Column ) )
				   || ( ( row == card2Row ) && ( column == card2Column ) ) ) {
					printf("\033[4%dm", color[row][column] );
					printf("\033[%d;%df    ", row*3+1, column*4+1 );
					printf("\033[%d;%df    ", row*3+2, column*4+1 );
					printf("\033[%d;%df    ", row*3+3, column*4+1 );
					printf("\033[0m" );
			}
			// 나머지는 번호 출력
			else {
					printf("\033[%d;%df    ",   row*3+1, column*4+1);
					printf("\033[%d;%df %d%d ", row*3+2, column*4+1, row+1, column+1 );
					printf("\033[%d;%df    ",   row*3+3, column*4+1);
			}
		}
	}
}

// 게임 종료 확인 함수
int success() {
	// 11 ~ 44 사이의 카드가 남아 있으면 게임 계속
	for( int row = 0; row < 4; row++ ) {
		for( int column = 0; column < 4; column++ ) {
			if( output[row][column] > 7 ) {
				return 0;
			}
		}
	}

	// 아니면 게임 종료
	printf("\033[1;1f                        \n" );
	printf("                        \n" );
	printf("                        \n" );
	printf("                        \n" );
	printf("        Success!!       \n" );
	printf("                        \n" );
	printf("                        \n" );
	printf("                        \n" );
	printf("                        \n" );
	printf("                        \n" );
	printf("                        \n" );
	printf("                        \n" );
	printf("                        \n" );
	printf("                        \n" );
	printf("                        \n" );
	return 1;
}

// 프로그램 시작
int main() {
	int card1=-1, card2=-1, card1Row=-1, card1Column=-1, card2Row=-1, card2Column=-1;

	do {
		// 먼저 카드 게임 현황 출력
		printGameBoard( card1Row, card1Column, card2Row, card2Column );

		// 이 때 같은 색 카드를 선택하면 카드 번호 대신 카드 색깔 출력
		if( ( card1 != card2 ) && ( color[card1Row][card1Column] == color[card2Row][card2Column] ) ) {
			output[card1Row][card1Column] = color[card1Row][card1Column];
			output[card2Row][card2Column] = color[card2Row][card2Column];

			// 게임 종료 확인
			if ( success() == 1 ) {
				break;
			}
		}

		// 게임 종료 아니면 카드 두 장 새로 선택받기
		printf("\033[15;1f첫번째 카드를 선택하세요:       \033[15;27f");
		scanf("%d", &card1);
		card1Row = card1 / 10 - 1;
		card1Column = card1 % 10 - 1;

		printf("\033[16;1f두번째 카드를 선택하세요:       \033[16;27f");
		scanf("%d", &card2);
		card2Row = card2 / 10 - 1;
		card2Column = card2 % 10 - 1;

	} while( (0<=card1Row)&&(card1Row<=3)&&(0<=card1Column)&&(card1Column<=3)
	       &&(0<=card2Row)&&(card2Row<=3)&&(0<=card2Column)&&(card2Column<=3));

	// 프로그램 종료
	return 0;
}

