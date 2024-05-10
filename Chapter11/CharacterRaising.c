// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter11/CharacterRaising.c

#include <stdio.h>
#include <string.h>
// 캐릭터 키우기 함수
void raise( char *character, int action, int *hp, int *xp, int *tn ) {
	// 캐릭터 활동별 능력치 초기화
	int stat[4][3] = { { 2, 1, 2 },
	                   { 1, 3, 4 },
	                   { 4, 4, 3 },
	                   { 3, 2, 1 } };

	char image[4][64] = { "  _\n_| |_\n(-_-)            \n(   )            \n",
	                      "  _\n_| |_\n(^O^) ~♩~~♪~♬~♩~\n(   )            \n",
	                      "  _\n_| |_\n(O.O)  O   O     \n(   ) \\|/ \\|/    \n",
	                      "  _\n_| |_\n(@O@)            \n(   ) |_|>       \n" };

	// 캐릭터 능력치 업데이트
	*hp += stat[action-1][0];
	*xp += stat[action-1][1];
	*tn += stat[action-1][2];
	strcpy( character, image[action-1] );
}

// 프로그램시작
int main() {
	int action = 1, hp = 0, xp = 0, tn = 0;
	char character[64] = "";

	do {
		// 먼저 캐릭터 키운 결과 출력
		raise( character, action, &hp, &xp, &tn );
		printf( "\033[1;1f%s\n체력%2d  경험%2d  기분%2d\n\n", character, hp, xp, tn );

		// 새로운 입력 받아서 게임 계속 진행
		printf("잠(1), 노래(2), 산책(3), 음식(4), 종료(5) 중 하나를 숫자로 입력하세요: " );
		scanf("%d",&action);

	} while( ( action == 1 ) || ( action == 2 ) || ( action == 3 ) || ( action == 4 ) );

	// 프로그램 종료
	return 0;
}

