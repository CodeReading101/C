// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter13/Pointer.c

//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// 기본 자료형 변수의 선언 및 값 저장
	char var1 = 'A';
	int var2 = 7;
	double var3 = 3.141592;
	// 포인터 변수의 선언 및 값 저장
	char *ptr1 = &var1;
	int *ptr2 = &var2;
	double *ptr3 = &var3;
	// 변수의 값 및 주소값 출력
	printf( "변수명(주소값)   저장값   포인터변수가 가리키는 값\n-------------------------\n" );
	printf( "var1(%p)  %c    \n", &var1, var1 );
	printf( "ptr1(%p)  %p  %c\n", &ptr1, ptr1, *ptr1 );
	printf( "var2(%p)  %d    \n", &var2, var2 );
	printf( "ptr2(%p)  %p  %d\n", &ptr2, ptr2, *ptr2 );
	printf( "var3(%p)  %f    \n", &var3, var3 );
	printf( "ptr3(%p)  %p  %f\n", &ptr3, ptr3, *ptr3 );
	return 0;
}

