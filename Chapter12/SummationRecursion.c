// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter12/SummationRecursion.c

#include <stdio.h>
// 0부터 n까지의 합계를 계산
int sigma( int num ) {
	// Σ 0 = 0
	if ( num <= 0 ) {
		printf ( "0 = " );
		return 0;
	}
	// Σ n = n + Σ ( n - 1 )
	else {
		printf ( "%d + ", num );
		return num = num +
		                   sigma( num - 1 );
	}
}

int main() {
	// 숫자 n 입력받기
	printf( "숫자를 입력하세요: " );
	int num = 0;
	scanf( "%d", &num );
	// 0부터 n까지의 합계 계산하기
	printf( "Σ %d = ", num );
	int sum = sigma( num );
	// 합계 출력하기
	printf ( "%d", sum );
	return 0;
}

