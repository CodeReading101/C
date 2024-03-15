// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter03/TaxiFare.c

#include <stdio.h>

// 프로그램 시작 
int main() {
	int distance = 0, taxiFare = 0;								

	// 사용자에게 이동거리를 입력받기 
	printf( "택시의 이동거리(m)를 입력하세요: " );
	scanf( "%d", &distance ); 								
	
	// 택시요금은 1.6km까지 기본료가 4800원이고 131m 당 100원 부과 
	taxiFare = 4800 + ( distance - 1600 + 130 ) / 131 * 100;				

	// 택시요금 출력 
	printf( "%dm 이동시 택시요금은 %d원입니다 ", distance, taxiFare ); 			

	// 프로그램 종료 
	return 0;
}

