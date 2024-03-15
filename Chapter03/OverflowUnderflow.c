// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter03/OverflowUnderflow.c

#include <stdio.h>

// 프로그램 시작 
int main() {	
	// int에 저장할 수 있는 최대값과 최소값으로 초기화 
	int max = +2147483647;			
	int min = -2147483648;			

	// int의 최대값에 1을 더하면 overflow 발생 
	int overflow = max + 1;			

	// int의 최소값에 1을 빼면 underflow 발생 
	int underflow = min - 1;	 

	// overflow와 underflow를 실습 결과 출력  
	printf( "max     =  %d\n", max );
	printf( "max + 1 = %d ( overflow 발생 )\n", overflow );	 
	printf( "min     = %d\n", min );
	printf( "min - 1 =  %d ( underflow 발생 )\n", underflow ); 

	// 프로그램 종료 
	return 0;
}

