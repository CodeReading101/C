// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter08/Summation.c

#include <stdio.h>
int main() {
	// 숫자 n 입력받기
	printf( "숫자를 입력하세요: " );
	int num = 0;
	scanf( "%d", &num );
	// n부터 0까지의 합계 계산하기
	printf( "Σ %d = ", num );
	int sum = 0;
	for(; num > 0; num-- ) {
		printf ( "%d + ", num );
		sum += num;
	}
	// 합계 출력하기
	printf ( "%d = %d", num, sum );
	return 0;
}

