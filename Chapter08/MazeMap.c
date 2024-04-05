// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter08/MazeMap.c

#include <stdio.h>

// 프로그램 시작
int main() {
	// 미로 맵을 2차원 배열로 초기화
	int row=0, column=0;
	char map[7][9] = {
	                   { 'W','W','W','W','W','W','W','W','W' },
	                   { 'W','A',' ',' ','W',' ',' ',' ','E' },
	                   { 'W','W','W',' ','W',' ','W','W','W' },
	                   { 'W',' ',' ',' ','W',' ',' ',' ','W' },
	                   { 'W',' ','W','W','W','W','W',' ','W' },
	                   { 'W',' ',' ',' ',' ',' ',' ',' ','W' },
	                   { 'W','W','W','W','W','W','W','W','W' }
	                 };

	// 미로 맵의 2차원 배열을 한 칸씩 출력
	for( row = 0; row < 7; row++ )
	{
		for( column = 0; column < 9; column++ )
		{
			// 첫째 Wall이면 벽 출력
			if( map[row][column] == 'W' )
				printf("\033[44m  \033[0m");
			// 둘째 ' '이면 길 출력
			else if( map[row][column] == ' ' )
				printf("  ");
			// 셋째 Exit이면 문 출력
			else if( map[row][column] == 'E' )
				printf("\033[34m문\033[0m");
			// 넷째 Actor이면 옷 출력
			else if( map[row][column] == 'A' )
				printf("\033[31m옷\033[0m");
		}
		printf("\n");
	}

	// 프로그램 종료
	return 0;
}

