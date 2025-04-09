// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter10/FamilyName.c

#include <stdio.h>
#include <string.h>
int main() {
	// 이름 2개를 입력
	printf( "A양, 이름을 입력하세요: " );
	char nameA[10] = "";
	scanf( "%s", nameA );
	printf( "B군, 이름을 입력하세요: " );
	char nameB[10] = "";
	scanf( "%s", nameB );
	// 이름에서 첫 음절을 비교하기
	// 첫 음절이 같으면 성이 같습니다 출력
	if ( !strncmp( nameA, nameB, 2 ) )
		printf( "%s과 %s은 성이 같습니다. ", nameA, nameB );
	// 첫 음절이 다르면 성이 다릅니다 출력
	else
		printf( "%s과 %s은 성이 다릅니다. ", nameA, nameB );
	return 0;
}

