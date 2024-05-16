// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter13/ClassAverage.c

#include <stdio.h>
#include <stdlib.h>

// 프로그램 시작
int main() {
	int count = 0, index = 0, sum = 0;
	int* scores = NULL;

	// 우리반 학생수 및 점수를 입력
	printf( "우리반 학생수를 입력하세요 : ");
	scanf( "%d", &count );

	// 학생수만큼 점수 저장 공간을 확보
	scores = (int*)malloc( sizeof(int) * count );
	for( index = 0; index < count; index++ ) {
		printf( "점수를 입력하세요 : ");
		scanf( "%d", &scores[index] );
	}

	// 평균 점수 계산 및 출력
	for( index = 0; index < count; index++ ) {
		sum += scores[index];
	}

	printf( "우리반 학생들의 평균 점수는 %.2f입니다", (double)sum / count );

	// 점수 저장 공간을 반납
	free( scores );

	// 프로그램 종료
	return 0;
}

