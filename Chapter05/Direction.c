// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter05/Direction.c

#include <stdio.h>
int main() {
	// 캐릭터의 초기 위치를 출력
	printf( "      / \n" );
	printf( " [   옷   문\n" );
	printf( "      -> \n\n" );
	// 이동 방향 입력 받기
	printf( "방향키(WASD)와[Enter]를 입력하세요: " );
	char direction = '\0';
	scanf( "%c", &direction);
	// 이동 결과 출력
	printf( "\033[2;6f  " );
	switch( direction ) {
		// W는 위로 이동
		case 'w': case 'W':
			printf( "\033[1;6f 옷/\033[7;15f" );
			break;
		// A는 왼쪽으로 이동
		case 'a': case 'A':
			printf( "\033[2;1f 옷]\033[7;15f" );
			break;
		// S는 아래로 이동
		case 's': case 'S':
			printf( "\033[3;6f 옷->\033[7;15f" );
			break;
		// D는 오른쪽으로 이동
		case 'd': case 'D':
			printf( "\033[2J\033[4;15fSUCCESS!\033[7;15f" );
	}
	return 0;
}

