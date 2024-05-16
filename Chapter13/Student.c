// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter13/Student.c

#include <stdio.h>

// 학생 정보 구조체 정의
typedef struct _Student{
	char name[16];
	int korean;
	int english;
	int mathematics;
	double average;
} Student;

// 프로그램시작
int main() {
	// 학생 정보를 초기화
	Student student = { "", 0, 0, 0, 0.0 };

	// 학생 정보를 입력 및 계산
	printf( "학생 이름을 입력하세요: " );
	scanf( "%s", student.name );
	printf( "0점 ~ 100점 사이의 국어 점수를 입력하세요: " );
	scanf( "%d", &student.korean );
	printf( "0점 ~ 100점 사이의 영어 점수를 입력하세요: " );
	scanf( "%d", &student.english );
	printf( "0점 ~ 100점 사이의 수학 점수를 입력하세요: " );
	scanf( "%d", &student.mathematics );
	student.average = (double)( student.korean + student.english + student.mathematics ) / 3;

	// 학생 정보를 출력
	printf( "%s 학생은 국어 %d점, 영어 %d점, 수학 %d점, 평균 %.2f점입니다",
		student.name, student.korean, student.english, student.mathematics, student.average );

	// 프로그램 종료
	return 0;
}

