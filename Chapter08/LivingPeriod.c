// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter08/LivingPeriod.c

#include <stdio.h>
// 프로그램 시작
int main() {
	// 월별 말일 및 임시변수 초기화
	int lastDayPerMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int previousYear = 0;
	int previousMonth = 0;

	// 생일 날짜 초기화
	int birthYear = 0;
	int birthMonth = 0;
	int birthDay = 0;
	int birthTotalDays = 0;

	// 오늘 날짜 초기화
	int thisYear = 0;
	int thisMonth = 0;
	int thisDay = 0;
	int thisTotalDays = 0;

	// 살아온 기간 초기화
	int duration = 0;

	// 생일 날짜를 입력
	printf( "생년을 입력하세요: " );
	scanf( "%d", &birthYear );
	printf( "생월을 입력하세요: " );
	scanf( "%d", &birthMonth );
	printf( "생일을 입력하세요: " );
	scanf( "%d", &birthDay );

	// 오늘 날짜를 입력
	printf( "올해를 입력하세요: " );
	scanf( "%d", &thisYear );
	printf( "이번 달을 입력하세요: " );
	scanf( "%d", &thisMonth );
	printf( "오늘 날짜를 입력하세요: " );
	scanf( "%d", &thisDay );

	// 살아온 기간 계산
	// 1년1월1일부터 생일 날짜까지 전체 날짜 계산
	// 1년1월1일부터 생일 직전년도 12월31일까지 날짜 계산
	previousYear = birthYear - 1;
	birthTotalDays = previousYear * 365 + previousYear / 4 - previousYear / 100 + previousYear / 400;
	// 생일 해당년도 1월1일부터 직전달 말일까지 날짜 계산
	for ( previousMonth = 1; previousMonth < birthMonth; previousMonth++ )
	{
		birthTotalDays += lastDayPerMonth[ previousMonth ];
		// 생일 윤년 2월의 경우 2월29일을 반영
		if ((previousMonth==2)&&(((birthYear%400)==0)||(((birthYear%100)!=0)&&((birthYear%4)==0)))) {
			birthTotalDays++;
		}
	}
	// 생일 해당달 1일부터 해당일까지 날짜 계산
	birthTotalDays += birthDay;

	// 1년1월1일부터 오늘 날짜까지 전체 날짜 계산
	// 1년1월1일부터 오늘 직전년도 12월31일까지 날짜 계산
	previousYear = thisYear - 1;
	thisTotalDays = previousYear * 365 +  previousYear / 4 - previousYear / 100 + previousYear / 400;
	// 오늘 해당년도 1월1일부터 직전달 말일까지 날짜 계산
	for ( previousMonth = 1; previousMonth < thisMonth; previousMonth++ )
	{
		thisTotalDays += lastDayPerMonth[ previousMonth ];
		// 오늘 윤년 2월의 경우 2월29일을 반영
		if ((previousMonth==2)&&(((thisYear%400)==0)||(((thisYear%100)!=0)&&((thisYear%4)==0)))) {
			thisTotalDays++;
		}
	}
	// 오늘 해당달 1일부터 해당일까지 날짜 계산
	thisTotalDays += thisDay;

	// 살아온 기간은 생일부터 오늘까지 전체 날짜의 차이로 계산
	duration = thisTotalDays - birthTotalDays + 1;

	// 몇 일째 살아왔는지 출력
	printf( "%d년 %d월 %d일부터 %d년 %d월 %d일까지 %d일째 잘 견디고 잘 살아내셨어요 당신의 미래를 응원합니다",
			birthYear, birthMonth, birthDay, thisYear, thisMonth, thisDay, duration );

	// 프로그램 종료
	return 0;
}

