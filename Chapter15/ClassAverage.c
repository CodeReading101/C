// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter15/ClassAverage.c

#include <stdio.h>
#include <stdlib.h>
int main() {
	// 우리반 학생수 및 점수를 입력
	printf( "우리반 학생수를 입력하세요: " );
	int count = 0;
	scanf( "%d", &count );
	// 학생수만큼 점수 저장 공간을 확보
	int* scores = (int*)malloc( sizeof(int) * count );
	for( int index = 0; index < count; index++ ) {
		printf( "점수를 입력하세요: " );
		scanf( "%d", &scores[index] );
	}
	// 평균 점수 계산 및 출력
	int sum = 0;
	for( int index = 0; index < count; index++ ) {
		sum += scores[index];
	}
	printf( "우리반 학생들의 평균 점수는 %.2f입니다", (double)sum / count );
	// 점수 저장 공간을 반납
	free( scores );
	return 0;
}

