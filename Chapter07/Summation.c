// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter07/Summation.c

#include <stdio.h> 

// 프로그램 시작 
int main() {
	int num = 0, sum = 0;						

	// 숫자 n 입력받기 
	printf( "숫자를 입력하세요: ");
	scanf( "%d", &num );
	
	// n부터 0까지의 합계 계산하기 
	printf( "Σ %d = ", num );
	for(; num > 0; num-- ) {
		printf ( "%d + ", num );	
		sum += num;			
	}
	
	// 합계 출력하기 
	printf ( "%d = %d", num, sum ); 

	//프로그램 종료 
	return 0;						
}

