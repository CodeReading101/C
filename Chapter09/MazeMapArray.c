// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter09/MazeMapArray.c

#include <stdio.h>
int main() {
	// 먼저, 미로 맵을 2차원 배열로 초기화
	int map[7][9] = {
	                 { 1,1,1,1,1,1,1,1,1 },
	                 { 1,2,0,0,1,0,0,0,3 },
	                 { 1,1,1,0,1,0,1,1,1 },
	                 { 1,0,0,0,1,0,0,0,1 },
	                 { 1,0,1,1,1,1,1,0,1 },
	                 { 1,0,0,0,0,0,0,0,1 },
	                 { 1,1,1,1,1,1,1,1,1 }
	                };
	// 길, 벽, 문, 옷의 출력 형식 설정
	char symbol[4][32] = { "  ", "\033[44m  \033[0m", "\033[34m문\033[0m", "\033[31m옷\033[0m" };

	// 2차원 미로 맵을 한 칸씩 출력
	for( int row = 0; row < 7; row++ ) {
		for( int column = 0; column < 9; column++ ) {
			printf( "%s", symbol[ map[row][column] ] );
		}
		printf( "\n" );
	}
	return 0;
}

