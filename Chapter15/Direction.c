// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter15/Direction.c

#include <stdio.h>

// 방향 매크로 상수 정의
#define up 'w'
#define UP 'W'
#define down 's'
#define DOWN 'S'
#define left 'a'
#define LEFT 'A'
#define right 'd'
#define RIGHT 'D'

// 프로그램시작
int main() {
	char direction = UP;

	// 캐릭터의 초기 위치를 출력
	printf("      / \n");
	printf(" [   옷   문\n");
	printf("      -> \n\n");

	// 이동 방향 입력 받기
	printf("방향키(WASD)와[Enter]를 입력하세요: " );
	scanf("%c",&direction);

	// 이동 결과 출력
	printf("\033[2;6f  ");
	switch( direction ) {
		// W는 위로 이동
		case UP: case up:
			printf("\033[1;6f 옷/ ");
			break;
		// A는 왼쪽으로 이동
		case LEFT: case left:
			printf("\033[2;1f 옷] ");
			break;
		// S는 아래로 이동
		case DOWN: case down:
			printf("\033[3;6f 옷-> ");
			break;
		// D는 오른쪽으로 이동
		case RIGHT: case right:
			printf("\033[1;1f              \n");
			printf("   Success!!   \n");
			printf("              ");
	}

	// 프로그램 종료
	return 0;
}

