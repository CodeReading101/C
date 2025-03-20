// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter03/OverflowUnderflow.c

#include <stdio.h>
int main() {
	// int의 최대값에 1을 더하면 overflow 발생
	int max = +2147483647;
	int overflow = max + 1;
	// int의 최소값에 1을 빼면 underflow 발생
	int min = -2147483648;
	int underflow = min - 1;
	// overflow와 underflow를 실습 결과 출력
	printf( "max     =  %d\n", max );
	printf( "max + 1 = %d ( overflow 발생 )\n", overflow );
	printf( "min     = %d\n", min );
	printf( "min - 1 =  %d ( underflow 발생 )\n", underflow );
	return 0;
}

