// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter03/ScoreAverage.c

#include <stdio.h>
int main() {
	// 과목별 점수를 입력
	printf( "0점 ~ 100점 사이의 국어 점수를 입력하세요: " );
	int korean = 0;
	scanf( "%d", &korean );
	printf( "0점 ~ 100점 사이의 영어 점수를 입력하세요: " );
	int english = 0;
	scanf( "%d", &english );
	printf( "0점 ~ 100점 사이의 수학 점수를 입력하세요: " );
	int mathematics = 0;
	scanf( "%d", &mathematics );
	// 평균 점수를 계산
	double average = (double)( korean + english + mathematics ) / 3;
	// 과목별 점수 및 평균을 출력
	printf( "국어 %d점, 영어 %d점, 수학 %d점의 평균은 %.2f점입니다.",
						korean, english, mathematics, average );
	return 0;
}

