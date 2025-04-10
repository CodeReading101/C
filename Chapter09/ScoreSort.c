// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter09/ScoreSort.c

#include <stdio.h>
int main() {
	int scores[5] = { 0, 0, 0, 0, 0 };
	// 점수 입력
	for ( int index = 0; index < 5; index++ ) {
		printf( "0점 ~ 100점 사이의 점수를 입력하세요: " );
		scanf( "%d", &scores[index] );
	}
	// 점수 정렬
	// 마지막 칸에 가장 큰 값을 저장하면서 한 칸씩 앞으로 영역 좁혀가기
	for ( int last = 4; 0 < last; last-- ) {
		// 영역의 첫번째 칸부터 인접한 두 값을 비교하면서
		for ( int index = 0; index < last; index++ ) {
			// 앞이 뒤보다 크면 두 값을 맞바꾸기하면서 뒤쪽에 큰 값을 저장
			if ( scores[index] > scores[index+1] ) {
				int temp = scores[index];
				scores[index] = scores[index+1];
				scores[index+1] = temp;
			}
		}
	}
	// 정렬된 점수 출력
	for ( int index = 0; index < 5; index++ )
		printf( "%d ", scores[index] );
	return 0;
}

