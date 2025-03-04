// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter01/RollingDice.c

#include <stdio.h>
#include <unistd.h>
int main() {
	// 1번 주사위 출력
	printf( "\033[2J" );
	printf( "\033[1;1f +-------+ \n" );
	printf( "\033[2;1f |       | \n" );
	printf( "\033[3;1f |   O   | \n" );
	printf( "\033[4;1f |       | \n" );
	printf( "\033[5;1f +-------+ \n" );
	// 1초 후 빈 화면에 2번 주사위 출력
	sleep(1);
	printf( "\033[2J" );
	printf( "\033[1;51f +-------+ \n" );
	printf( "\033[2;51f | O     | \n" );
	printf( "\033[3;51f |       | \n" );
	printf( "\033[4;51f |     O | \n" );
	printf( "\033[5;51f +-------+ \n" );
	// 1초 후 빈 화면에 3번 주사위 출력
	sleep(1);
	printf( "\033[2J" );
	printf( "\033[1;31f +-------+ \n" );
	printf( "\033[2;31f | O     | \n" );
	printf( "\033[3;31f |   O   | \n" );
	printf( "\033[4;31f |     O | \n" );
	printf( "\033[5;31f +-------+ \n" );
	// 1초 후 빈 화면에 4번 주사위 출력
	sleep(1);
	printf( "\033[2J" );
	printf( "\033[1;11f +-------+ \n" );
	printf( "\033[2;11f | O   O | \n" );
	printf( "\033[3;11f |       | \n" );
	printf( "\033[4;11f | O   O | \n" );
	printf( "\033[5;11f +-------+ \n" );
	// 1초 후 빈 화면에 5번 주사위 출력
	sleep(1);
	printf( "\033[2J" );
	printf( "\033[1;21f +-------+ \n" );
	printf( "\033[2;21f | O   O | \n" );
	printf( "\033[3;21f |   O   | \n" );
	printf( "\033[4;21f | O   O | \n" );
	printf( "\033[5;21f +-------+ \n" );
	// 1초 후 빈 화면에 6번 주사위 출력
	sleep(1);
	printf( "\033[2J" );
	printf( "\033[1;41f +-------+ \n" );
	printf( "\033[2;41f | O   O | \n" );
	printf( "\033[3;41f | O   O | \n" );
	printf( "\033[4;41f | O   O | \n" );
	printf( "\033[5;41f +-------+ \n" );
	return 0;
}

