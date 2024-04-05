// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter08/ScoreSort.c

#include <stdio.h>

// 프로그램시작
int main() {
	int score[3] = { 0 };
	int index = 0;
	int last = 0;
	int temp = 0;

	// 점수들 입력
	for( index = 0; index < 3; index++ )
	{
		printf( "0점 ~ 100점 사이의 점수를 입력하세요: " );
		scanf( "%d", &score[index] );
	}

	// 점수 정렬
	// 마지막 칸에 가장 큰 값을 저장하면서 한 칸씩 앞으로 영역 좁혀가기
	for ( last = 2; last >= 0; last-- )
	{
		// 영역의 첫번째 칸부터 인접한 두 값을 비교하면서
		for ( index = 0; index < last; index++ )
		{
			// 앞이 뒤보다 크면 두 값을 맞바꾸기하면서 뒤쪽에 큰 값을 저장
			if ( score[index] > score[index+1] )
			{
				temp = score[index];
				score[index] = score[index+1];
				score[index+1] = temp;
			}
		}
	}

	// 정렬된 점수 출력
	for ( index = 0; index < 3; index++ )
	{
		printf( "%d) %d ", index + 1, score[index] );
	}

	// 프로그램 종료
	return 0;
}

