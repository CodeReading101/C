// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter08/CardFlip.c

#include <stdio.h>

// 프로그램 시작
int main() {
	int output[4][4] = {{ 11, 12, 13, 14 },
	                     { 21, 22, 23, 24 },
	                     { 31, 32, 33, 34 },
	                     { 41, 42, 43, 44 } };
	int color[4][4] = {
	                     { 0, 1, 2, 7 },
	                     { 3, 5, 6, 0 },
	                     { 2, 4, 6, 3 },
	                     { 4, 5, 1, 7 } };
	int card1=0, card2=0, row=0, column=0;

	do {
		// 먼저 카드 게임 현황 출력
		for( row = 0; row < 4; row++ ) {
			for( column = 0; column < 4; column++ ) {
				if( ( output[row][column] <= 7 )
				   || ( (row==( card1/10-1 )) && (column==( card1%10-1 )) )
				   || ( (row==( card2/10-1 )) && (column==( card2%10-1 )) ) ) {
					printf("\033[4%dm", color[row][column] );
					printf("\033[%d;%df    ", row*3+1, column*4+1 );
					printf("\033[%d;%df    ", row*3+2, column*4+1 );
					printf("\033[%d;%df    ", row*3+3, column*4+1 );
					printf("\033[0m" );
				}
				else {
					printf("\033[%d;%df    ",   row*3+1, column*4+1);
					printf("\033[%d;%df %d%d ", row*3+2, column*4+1, row+1, column+1 );
					printf("\033[%d;%df    ",   row*3+3, column*4+1);
				}
			}
		}

		// 같은 색 카드를 선택하면 카드 번호 대신 카드 색상 출력
		if( (card1!=card2) && (color[ card1/10-1 ][ card1%10-1 ] == color[ card2/10-1 ][ card2%10-1 ])){
			output[ card1/10-1 ][ card1%10-1 ] = color[ card1/10-1 ][ card1%10-1 ];
			output[ card2/10-1 ][ card2%10-1 ] = color[ card2/10-1 ][ card2%10-1 ];

			// 이때 더 이상 남은 카드 번호가 없으면 종료
			for( row = 0; row < 4; row++ ) {
				for( column = 0; column < 4; column++ ) {
					if( output[row][column] > 7 ) {
						column = 10;
						row = 10;
						break;
					}
				}
			}
			if ( row == 4 ) {
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
				break;
			}
		}

		// 카드 두 장 새로 입력받기
		printf("\033[15;1f첫번째 카드를 선택하세요:       \033[15;27f");
		scanf("%d", &card1);
		printf("\033[16;1f두번째 카드를 선택하세요:       \033[16;27f");
		scanf("%d", &card2);

	} while( (1<=card1/10) && (card1/10<=4) && (1<=card1%10) && (card1%10<=4)
	       &&(1<=card2/10) && (card2/10<=4) && (1<=card2%10) && (card2%10<=4));

	// 프로그램 종료
	return 0;
}

