#define _CRT_SECURE_NO_WARNINGS
#define DAYS_PER_WEEK 7
#define MAX_NAME_LEN 15
#include <stdio.h>
enum WEEKDAY {SUN, MON, TUE, WED, THR, FRI, SAT};
enum MONTH { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC, NUM_MONTHS};

bool isLeapYear(int y)
{
	if(((y%4) == 0) && ((y%100) !=0 || ((y%400) ==0)))
		return true;
	else
		return false;
}

int getDaysFromJan01AD01(int year, int month)
{
	int daysFromAD01Jan01 = 0;
	int daysInYear;
	int daysInMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days = 0;

	for (int y = 1; y < year; y++)
	{
		daysInYear = isLeapYear(y) ? 366 : 365;
		days += daysInYear;
	}

	if (isLeapYear(year))
		daysInMonth[2] = 29;

	for (int m = 1; m < month; m++)
	{
		days += daysInMonth[m];
	}
	
	return daysFromAD01Jan01;
}

int main(void)
{
	int year, month = 0;
	printf("Input year (0 to quit) and month for print_calendar() : ");
	scanf("%d %d", &year, &month);

}
