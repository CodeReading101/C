// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter10/Summation.c

#include <stdio.h>

// 0부터 n까지의 합계 계산하는 함수
int sigma( int num ) {
	// n이 0 이하이면 Σ 연산 종료
	if ( num <= 0 ) {
		printf ( "%d = ", num );
		return num;
	}
	// Σ n = n + Σ ( n - 1 )
	else {
		printf ( "%d + ", num );
		return num = num +
		                   sigma( num - 1 );
	}
}


// 프로그램 시작
int main() {
	int sum = 0, num = 0;

	// 숫자 n 입력받기
	printf( "숫자를 입력하세요: ");
	scanf( "%d", &num );

	// 0부터 n까지의 합계 계산하기
	printf( "Σ %d = ", num );
	sum = sigma( num );

	// 합계 출력하기
	printf ( "%d", sum );

	//프로그램 종료
	return 0;
}

