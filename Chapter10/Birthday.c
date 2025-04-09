// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter10/Birthday.c

#include <stdio.h>
#include <unistd.h>
int main() {
	char lyrics[28][10] = { "생","일 ","축","하","합","니","다 ","생","일 ","축","하","합","니","다 ","사","랑","하","는 ","OO","의 ","생","일 ","축","하","합","니","다 ", "\0" };
	// 이름을 입력
	printf( "이름을 입력하세요: " );
	scanf( "%s", lyrics[18] );
	// 생일 축하 노래 출력
	for ( int index = 0; lyrics[index][0] != '\0'; index++ )
	{
		// 글자 출력
		printf( "%s", lyrics[index] );
		// fflush( stdout );
		// 1초 쉬기
		// sleep(1);
	}
	return 0;
}

