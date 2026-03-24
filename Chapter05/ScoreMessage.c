// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter05/ScoreMessage.c

#include <stdio.h>
int main() {
	// 사용자에게 점수 입력받기
	printf( "0점 ~ 100점 사이의 점수를 입력하세요: " );
	int score = 0;
	scanf( "%d", &score );
	switch ( score / 10 ) {
		// 90점이상이면 와! 끝내주게 잘 했다를 출력
		case 10:
		case 9:
			printf( "와! " );
		// 80점이상이면 끝내주게 잘 했다를 출력
		case 8:
			printf( "끝내주게 " );
		// 70점이상이면 잘 했다를 출력
		case 7:
			printf( "잘 " );
		// 나머지는 했다를 출력
		default:
			printf( "했다" );
	}
	return 0;
}

