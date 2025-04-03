// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter07/Elevator.c

#include <stdio.h>
int main() {
	// 엘리베이터에서 내릴 층수 입력받기
	printf( "1층~5층 중 몇 층으로 올라가시나요 : " );
	int destinationFloor = 0;
	scanf( "%d", &destinationFloor );
	// 출발 메시지 출력
	printf( "%d층으로 올라갑니다. 문이 닫힙니다.\n", destinationFloor );
	// 1층부터 목적지까지 한 층씩 이동하기
	int currentFloor = 1;
	while( currentFloor <= destinationFloor ) {
		printf( "%d층\n", currentFloor );
		currentFloor++;
	}
	// 도착 메시지 출력
	printf( "딩~동~댕~동~~ %d층입니다. 문이 열립니다", destinationFloor );
	return 0;
}

