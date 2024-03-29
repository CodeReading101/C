// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter07/Factorial.c

#include <stdio.h> 

// 프로그램 시작 
int main() {
	int num = 0, factorial = 1;						

	// 숫자 n 입력받기 
	printf( "숫자를 입력하세요: ");
	scanf( "%d", &num );
	
	// n부터 1까지의 곱 계산하기 
	printf( "%d! = ", num );
	for(; num > 1; num -- ) {
		printf ( "%d * ", num );	
		factorial *= num;			
	}
	
	// 곱셈 결과 출력하기 
	printf ( "%d = %d", num, factorial ); 

	//프로그램 종료 
	return 0;
}

