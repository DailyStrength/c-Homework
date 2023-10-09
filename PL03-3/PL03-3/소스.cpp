#define _CRT_SECURE_NO_WARNINGS
#define DAYS_PER_WEEK 7
#define MAX_NAME_LEN 15
#define WEEKDAY_AD01Jan01 MON // the weekday of AD Jan 1.
#include <stdio.h>
enum WEEKDAY {SUN, MON, TUE, WED, THR, FRI, SAT};
enum MONTH { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC, NUM_MONTHS};
const char* weekDayName[DAYS_PER_WEEK] = { "SUN", "MON","TUE", "WED", "THR", "FRI", "SAT" };
const char* monthName[NUM_MONTHS] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

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
		daysFromAD01Jan01 += daysInYear;
	}

	if (isLeapYear(year))
		daysInMonth[2] = 29;

	for (int m = 1; m < month; m++)
	{
		daysFromAD01Jan01 += daysInMonth[m];
	}
	
	return daysFromAD01Jan01;
}

void printCalendar(int year, int month)
{
	int weekDay;
	int daysFromJan01AD01 = 0;
	int daysInMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	daysFromJan01AD01 = getDaysFromJan01AD01(year, 1);
	weekDay = (daysFromJan01AD01 - 1);
}

void printEnglishMonth(int year, int month)
{
	switch (month)
	{
	case 1:
		printf("January"); break;
	case 2:
		printf("February"); break;
	case 3:
		printf("March"); break;
	case 4:
		printf("April"); break;
	case 5:
		printf("May"); break;
	case 6:
		printf("June"); break;
	case 7:
		printf("July"); break;
	case 8:
		printf("August"); break;
	case 9:
		printf("September"); break;
	case 10:
		printf("October"); break;
	case 11:
		printf("November"); break;
	case 12:
		printf("December"); break;
	default:
		break;

	}
}

int main(void)
{
	int year, month = 0;
	while (1)
	{
		printf("Input year (0 to quit) and month for print_calendar() : ");
		scanf("%d %d", &year, &month);

		if (year == 0)
			break;
		printf("\n>>>>>>> ");
		printEnglishMonth(year, month);
		printf(" %d <<<<<<<\n", year);
		printf("===================================");
		printf("\n  SUN  MON  TUE  WED  THR  FRI  SAT  ");
		printf("\n----------------------------------\n");



	}
	return 0;
}
