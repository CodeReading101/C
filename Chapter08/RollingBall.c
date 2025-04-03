// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter08/RollingBall.c

#include <stdio.h>
#include <unistd.h>
int main() {
	int frameLength = 0;
	// 애니메이션 총 프레임 길이 입력 받기
	printf( "애니메이션 총 프레임 길이를 입력하세요: " );
	scanf( "%d", &frameLength );
	// 첫번째 프레임부터 마지막 프레임까지
	for( int frame = 1; frame <= frameLength; frame++ ) {
		// 1초마다 굴러가는 공 출력
		printf ( "\033[2;%df O", frame );
		// fflush( stdout );
		// sleep(1);
	}
	return 0;
}

