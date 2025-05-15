// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter15/CharacterRaising.c

#include <stdio.h>
#include <string.h>
typedef struct {
	int hp;
	int xp;
	int fl;
	char image[64];
} Stat;
// 캐릭터 키우기 함수
Stat raise( Stat character, int action ) {
	Stat stat[4] = { { 2, 1, 2, "  _\n_| |_\n(-_-)            \n(   )            \n" },
                        { 1, 3, 4, "  _\n_| |_\n(^O^) ~♩~~♪~♬~♩~\n(   )            \n",  },
                        { 4, 4, 3, "  _\n_| |_\n(O.O)  O   O     \n(   ) \\|/ \\|/    \n" },
                        { 3, 2, 1, "  _\n_| |_\n(@O@)            \n(   ) |_|>       \n" } };
	character.hp += stat[action-1].hp;
	character.xp += stat[action-1].xp;
	character.fl += stat[action-1].fl;
	strcpy( character.image, stat[action-1].image );
	return character;
}
int main() {
	int action = 1;
	Stat character = { 0, 0, 0, "" };
	do {
		// 먼저 캐릭터 키운 결과 출력
		character = raise( character, action );
		printf( "\033[1;1f%s\n체력%2d  경험%2d  기분%2d\n\n", character.image, character.hp, character.xp, character.fl );
		// 새로운 입력 받아서 게임 계속 진행
		printf( "잠자기(1), 노래(2), 산책(3), 먹기(4), 종료(5) 중 하나를 숫자로 입력하세요: " );
		scanf( "%d", &action);
	} while( ( action == 1 ) || ( action == 2 ) || ( action == 3 ) || ( action == 4 ) );
	return 0;
}

