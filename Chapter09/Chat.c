// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter09/Chat.c

#include <stdio.h>
#include <string.h>
// 프로그램 시작
int main() {
	int	index = 0;
	char	input[128] = "";
	char	dialogue[4][2][128] = { { "이름이 뭐", "난 재석이야. 국민MC 유재석과 이름이 같아. ㅎㅎㅎ 넌 몇 살이니?" },
		  { "몇 살", "난 20살이야. 남들이 다 부러워하는 나이지. 넌 어디 살아?" },
		  { "어디 살", "난 홍지동 살아. 북한산 아래 있어서 공기가 무지 맑아.ㅎㅎㅎ 취미가 뭐니?" },
		  { "만나서 반가", "나도 반가워 친하게 지내자" } };

	// 사용자와 시스템의 대화 반복
	printf( "[시스템] 안녕? 넌 이름이 모야?\n 사용자: " );
	while( 1 ) {
		// 사용자 입력
		fgets( input, 128, stdin );

		// 시스템 답변 출력
		if ( strstr( input, "바이" ) != NULL )
		{
			printf( "[시스템] 그래 안녕! 담에 또 봐~\n" );
			break;
		}
		// 준비한 대화쌍에서
		for ( index = 0; index < 4; index++ )
		{
			// 적절한 답변을 찾으면 시스템 답변을 출력
			if ( strstr( input, dialogue[index][0] ) != NULL ) {
				printf( "[시스템] %s\n 사용자: ", dialogue[index][1] );
				break;
			}
		}

		// 적절한 답변을 못 찾으면 '뭐 딴거 재밌는거 없을까?' 출력
		if ( index == 4 ) {
			printf( "[시스템] 뭐 딴거 재밌는거 없을까?\n 사용자: " );
		}
	}
	// 프로그램 종료
	return 0;
}

